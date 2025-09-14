#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Array(char **N, int snum) {
    printf("Given strings are: %s", N[0]);
    if(snum>1){
        for(int i=1;i<snum-1;i++){
            printf(", %s",N[i]);
        }
        printf(", %s",N[snum-1]);
    }
    printf("\n");

    if(snum>1){
        int i=1;
        while (i<snum){
            int j=i;
            while (j>0 && strlen(N[j-1])>strlen(N[j])){
                char *temp=N[j];
                N[j]=N[j-1];
                N[j-1]=temp;
                j--;
            }
        i++;
        }
        printf("Sorted strings are: %s,", N[0]);
        for(int i=1;i<snum-1;i++){
            printf(" %s,",N[i]);
        }
        printf(" %s\n",N[snum-1]);
    }

    else{
        printf("Nothing to sort\n");
    }
    return 0;
}

int main(int snum, char **N) {
    printf("Please input the number of strings: \n");
    scanf("%d",&snum);

    N=malloc(snum*sizeof(char*));
    for(int i=0;i<snum;i++){
        char str[256];
        printf("Input string %d: ", i+1);
        scanf("%s",str);
        N[i]=malloc((1+strlen(str))*sizeof(char*));
        strcpy(N[i],str);
    }
    Array(N,snum);

    for(int i=0;i<snum;i++){
        free(N[i]);
    }
    free(N);
    return 0;
}