#include <stdio.h> 
#include <stdlib.h>
#include <unistd.h>			//fork()	 
#include <sys/types.h> 		//pid_t
#include <sys/wait.h> 		//wait 
#include <string.h>
#include <sys/shm.h>

#define BUFSIZE 1000

typedef struct File{
    char wordArray[50][256];
} arrayOfWords;

//will add some getOpt stuff later 

int main(int argc, char *argv[]){
	FILE *fp = fopen(argv[1], "r");
		
		
	char buff[BUFSIZE];
	
	while(fgets(buff,BUFSIZE-1, fp) != NULL){
		printf("%s\n", buff);
	}
	fclose(fp);
}
	
	
	