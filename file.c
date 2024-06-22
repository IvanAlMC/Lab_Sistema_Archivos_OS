#include <dirent.h>
#include <stdio.h>

int main(int argc, char *args[]){
	DIR *dp;
	struct dirent *ep;
	dp = opendir (args[1]);
	if (dp != NULL){
		while(ep = readdir(dp))
			puts (ep->d_name);
		(void) closedir (dp);	
	}else{
		perror("No se puede abrir el directorio");
	}
	return 0;
}
