// C program to illustrate 
// read system Call 
#include <stdio.h> 
#include <fcntl.h>
#include <stdlib.h>

int main() 
{ 
int fd, sz; 
char *c = (char *) calloc(100, sizeof(char));
size_t read (int fd, void* buf, size_t cnt); 
  
fd = open("list.txt", O_RDONLY); 
if (fd < 0) { perror("r1"); exit(1); } 
  
sz = read(fd, c, 10); 
printf("AL ejecutar read(% d, c, 10). nos dice que se lleyeron"
        " %d bytes.\n", fd, sz); 
c[sz] = '\0'; 
printf("Donde estos bytes son los siguientes: % s\n", c); 
} 
