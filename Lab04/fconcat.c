#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

#define BUFFSIZE 4096

int main(int argc, char *argv[]){
    int fl01, fl02;
    long int n;
	char buf[BUFFSIZE];

    if(argc != 3){
		printf("Usage: %s <source_filename> <destination_filename>\n", argv[0]);
		exit (-1);
	}
    
    if(strcmp(argv[1],argv[2])==0)){
        printf("Error cannot concatenate a file to itself\n");
        exit(-1)
    }
    fl01=open(argv[1], O_WRONLY | O_APPEND | O_CREAT, 0700);
    fl02=open(argv[2], O_RDONLY);

    if(fl01<0 || fl02<){
        printf("Error reading input file\n");
        exit(-1);
    }    

    while((n=read(fl02, buf, BUFFSIZE))>0){
        if(write(fl01,buf, n)!=n){
            printf("Error concating to file\n");
            exit(-1);
        }
    }
    close(fl01);
    close(fl02);
}