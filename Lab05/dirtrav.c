#include <stdio.h> 
#include <stdlib.h>
#include <dirent.h>
#include <sys/stat.h>
#include <string.h>

void traverse(char *directory){
    struct dirent *dirent; 
    DIR *parentDir; 

    parentDir = opendir (directory); 
    if (parentDir == NULL) { 
        printf ("Error opening directory '%s'\n", directory); 
        exit (-1);
    } 
    int count=0;
    while((dirent = readdir(parentDir)) != NULL){
        if(strcmp((*dirent).d_name, ".")==0 || strcmp((*dirent).d_name, "..")==0)
            continue;
        if((*dirent).d_type==DT_DIR){
            count++;
            printf ("[%d] Directory: \%s\n", count, (*dirent).d_name);
            char dirname[500];
            sprintf(dirname,"%s/%s",directory,dirent->d_name);
            traverse(dirname);
        }
        else{
            count++;
            printf("   File [%d]: %s\n",count, (*dirent).d_name);
        }
    }
    closedir (parentDir); 
}

int main (int argc, char **argv) { 
  if (argc < 2) { 
    printf ("Usage: %s <dirname>\n", argv[0]); 
    exit(-1);
  }
  traverse(argv[1]);
  return 0;
}
 