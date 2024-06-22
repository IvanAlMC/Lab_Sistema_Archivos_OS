// C program to illustrate
// write system Call
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

int main()
{
int sz;
int fd = open("list.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
size_t write(int fd, void* buf, size_t cnt); 
int close(int fd);

if (fd < 0)
{
	perror("r1");
	exit(1);
}

sz = write(fd, "hola geeks\n", strlen("hola geeks\n"));
printf("corriendo el metodo write(% d, \"hola geeks\\n\", %d)."
	" Obtenemos: %d\n", fd, strlen("hola geeks\n"), sz);
close(fd);

}

