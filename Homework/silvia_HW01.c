#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int sumOfDigits(int n){
   if(n<1){
    printf("n=%d: -1\n",n);
   }
   else{
    char s[100];
    int ttl=0;
    sprintf(s, "%d", n);
    int len=strlen(s);
    for(int i=0;i<len;i++){
        char c=s[i];
        int num=c-'0';
        ttl+=num;
    }
    printf("n=%d: %d\n",n,ttl);
    }
    return 0;
}
/*
int UABMaxMinDiff(int arr[]){
    int len=sizeof(arr[])/sizeof(arr[0]);
    for(int i=0;i<len;i++){
        int min;
        int max;
        if(i=0){
            min=arr[i];
            max=arr[i];
        }
        if(i=len-1){
            if(arr[i]<min){
                min=arr[i];
            }
            if(arr[i]>max){
                max=arr[i];
            }
            int diff=max-min;
            printf("%d",diff);
        }
        else{
            if(arr[i]<min){
                min=arr[i];
            }
            if(arr[i]>max){
                max=arr[i];
            }
        }
    }
}

int replaceEvenWithZero(int arr[]){

}

bool perfectSquare(int n){

}

int countVowels(char s){

}
*/
int main(){
    printf("-Sum of Digits-\n");
    sumOfDigits(123);
    sumOfDigits(405);
    sumOfDigits(0);
    sumOfDigits(7);
    sumOfDigits(-308);
    printf("-Max and Min Diff-\n");
    //UABMaxMinDiff([3,7,2,9]);
}