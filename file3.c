// C program to illustrate close system Call
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

int main()
{
	int fd1 = open("list.txt", O_RDONLY);
	int close(int fd);
	if (fd1 < 0)
	{
		perror("c1");
		exit(1);
	}
	printf("opened the fd = % d\n", fd1);
	
	// Using close system Call
	if (close(fd1) < 0)
	{
		perror("c1");
		exit(1);
	}
	printf("closed the fd.\n");
}

