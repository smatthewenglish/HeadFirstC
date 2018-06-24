#include <stdio.h>
#include <string.h>
#include <errno.h>

int main(int argc, char *argv[])
{
	char *feeds[] = {"https://www.economist.com/sections/united-states/rss.xml", 
					 "http://www.spiegel.de/international/index.rss"};

	int times = 3;
	char *phrase = argv[1];

	int i;
	for(i = 0; i < times; i++) {
		char var[255];
		sprintf(var, "RSS_FEED=%s", feeds[i]);
		char *vars[] = {var, NULL};

		if(execle("/usr/bin/python", "/usr/bin/python", "./dogriffiths-rssgossip-f0bb346/rssgossip.py", phrase, NULL, vars) == -1) {
			fprintf(stderr, "Can't run script: %s\n", strerror(errno));
			return 1;
		}
	}
	return 0;
}