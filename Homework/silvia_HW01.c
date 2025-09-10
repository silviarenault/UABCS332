#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

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
int UABMaxMinDiff(int arr){
    printf("arr: [%d", arr[0]);
        int j=1;
        while (j<N){
            printf(", %d", arr[j]);
            j++;
        }
        printf("]=");
    int len=sizeof(arr[])/sizeof(arr[0]);
    for(int i=0;i<len;i++){
        int min; //cannot set value to zero in case it is below minimum in range
        int max; //cannot set value to zero in case it is above maximum in range
        int diff;
        if(i=0){
            min=arr[i];
            max=arr[i];
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
    diff=max-min;
    printf(" %d",diff);
    return 0;
}


int replaceEvenWithZero(int arr[]){

}
*/

bool perfectSquare(int n){
    for(int i=n-1;i>0;i--){
        if(i==abs(n/i)){
            printf("%d: True\n",n);
            return true;
            }
    }
    printf("%d: False\n",n);
    return false;
}
/*
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
    //int arr[3,7,2,9];
    //UABMaxMinDiff(arr);
    printf("-Perfect Square\n");
    perfectSquare(16);
    perfectSquare(15);
    perfectSquare(25);
    perfectSquare(36);
}