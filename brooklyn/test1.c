#include <string.h>
#include <stdio.h>
#include <errno.h>

int main(int argc, char *argv[])
{
	char *my_env[] = {"FOOD=donuts", NULL};
	if(execle("./coffee", "./coffee", "cream", NULL, my_env) == -1) {
		fprintf(stderr, "Can't run process 0: %s\n", strerror(errno));
		return 1;
	}
}