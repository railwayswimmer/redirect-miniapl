#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(void)
{
	int ret = -1;
	int pid;
	FILE *fd;

	if(fopen("latestpid", "r") != NULL)
	{
		pid = getpid();
		fd = freopen("latestpid", "w", stdout);
		printf("%d", pid);
		fclose(fd);
		ret = 0;
	}
	else
	{
		printf("file not found\n");
	}

	return ret;
}
