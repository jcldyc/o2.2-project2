#include <stdio.h> 
#include <stdlib.h>
#include <unistd.h>			//fork()	 
#include <sys/types.h> 		//pid_t
#include <sys/wait.h> 		//wait 
#include <string.h>
#include <sys/shm.h>

#define BUFSIZE 1000
#define BUF 128
#define TOT 10

typedef struct File{
    char wordArray[50][256];
} arrayOfWords;

//will add some getOpt stuff later 

int main(int argc, char *argv[]){
	char line[TOT][BUF];
	FILE *fp = fopen(argv[1], "r");
		
		
	char buff[BUFSIZE];
	int i = 0;
	
<<<<<<< HEAD
	 while(fgets(line[i], BUF, fp)) {
        /* get rid of ending \n from fgets */
        line[i][strlen(line[i]) - 1] = '\0';
        i++;
    }
	total = i;
	for(i=0; i<total;++i)
		printf("%s\n", line[i]);
	/* while(fgets(buff,BUFSIZE-1, fp) != NULL){
		//printf("%s\n", buff);
		
	} */
=======
	while(fgets(buff,BUFSIZE-1, fp) != NULL){
		printf("%s", buff);
	}
>>>>>>> cc4bb985f4928093e214df26e8c974fb53aee845
	fclose(fp);
}
	
	
	
