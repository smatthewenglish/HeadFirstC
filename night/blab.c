#include <sys/socket.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#define DEFAULT_PORT 30000

void error(char *msg){
	fprintf(stderr, "%s: %s\n", msg, strerror(errno));
	exit(1);
}

int main(int argc, char *argv[])
{
	char *advice[] = {
		"Take smaller bites.\r\n",
		"Go for the tight jeans. No they do NOT make you look fat.\r\n",
		"One word: inappropriate\r\n",
		"Just for today, be honest. Tell your boss what you *really* think.\r\n",
		"You might want to rethink that haircut.\r\n"
	};

	int listener_d = socket(PF_INET, SOCK_STREAM, 0);	// Create a socket.

	struct sockaddr_in name;
	name.sin_family = PF_INET;
	name.sin_port = (in_port_t)htons(30000);
	name.sin_addr.s_addr = htonl(INADDR_ANY);

	bind(listener_d, (struct sockaddr *) &name, sizeof(name));	// Bind the socket to port 30000.

	listen(listener_d, 10); 	// Set the listen queue depth to 10.

	puts("Waiting for connection");
	while(1) {	// You need to loop the accept/begin talking section.
		struct sockaddr_storage client_addr;
		unsigned int address_size = sizeof(client_addr);
		
		int connect_d = accept(listener_d, (struct sockaddr *)&client_addr, &address_size);	// Accept a connection from a client.
		char *msg = advice[rand() % 5];
		
		send(connect_d, msg, strlen(msg), 0);	// Begin talking to the client.

		close(connect_d);
	}

	return 0;
}