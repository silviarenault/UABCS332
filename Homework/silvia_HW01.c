#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

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

int UABMaxMinDiff(int *arr, int len){
    int diff;
    int max=arr[0];
    int min=arr[0];
    printf("arr[%d", arr[0]);
        int i=1;
        while (i<len){
            printf(", %d", arr[i]);
            i++;
        }
    printf("]: ");
    for(int j=0;j<len;j++){
        if(arr[j]>max){
            max=arr[j];
        }
        if(arr[j]<min){
            min=arr[j];
        }
    }
    diff=max-min;
    printf("%d\n",diff);
    return 0;
}

int replaceEvenWithZero(int *arr, int len){
    int replace[len];
    printf("arr[%d", arr[0]);
    int i=1;
    while (i<len){
        printf(", %d", arr[i]);
        i++;
    }
    printf("]: ");
    for(int j=0;j<len;j++){
        if(arr[j]%2!=0){
            replace[j]=arr[j];
        }
        else{
            replace[j]=0;
        }
    }
    printf("[%d", replace[0]);
    int k=1;
    while (k<len){
        printf(", %d", replace[k]);
        k++;
    }
    printf("]\n");
    return 0;
}
    
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

int countVowels(char *s){
    printf("s=%s: ",s);
    int slen=strlen(s);
    char vowels[]="aeiou";
    int vlen=strlen(vowels);
    int ttl=0;
    char sLower[slen];
    strcpy(sLower,s);
    for(int i=0;i<slen;i++){
        sLower[i]=tolower(sLower[i]);
    }
    for(int j=0;j<slen;j++){
        for(int k=0;k<vlen;k++){
            if(sLower[j]==vowels[k]){
                ttl+=1;
            }
        }
    }
    printf("%d\n",ttl);
    return 0;
}

int main(){
    printf("-Sum of Digits-\n");
    sumOfDigits(123);
    sumOfDigits(405);
    sumOfDigits(0);
    sumOfDigits(7);
    sumOfDigits(-308);
    printf("-Max and Min Diff-\n");
    int mm1[]={3,7,2,9};
    int len=sizeof(mm1)/sizeof(mm1[0]);
    UABMaxMinDiff(mm1,len);
    int mm2[]={5,5,5,5,5,5};
    len=sizeof(mm2)/sizeof(mm2[0]);
    UABMaxMinDiff(mm2,len);
    int mm3[]={-2,4,-1,6,5};
    len=sizeof(mm3)/sizeof(mm3[0]);
    UABMaxMinDiff(mm3,len);
    printf("-Replace Even with Zero-\n");
    int rz1[]={1,2,3,4};
    len=sizeof(rz1)/sizeof(rz1[0]);
    replaceEvenWithZero(rz1,len);
    int rz2[]={2,4,6};
    len=sizeof(rz2)/sizeof(rz2[0]);
    replaceEvenWithZero(rz2,len);
    int rz3[]={1,3,5};
    len=sizeof(rz3)/sizeof(rz3[0]);
    replaceEvenWithZero(rz3,len);
    printf("-Perfect Square\n");
    perfectSquare(16);
    perfectSquare(15);
    perfectSquare(25);
    perfectSquare(36);
    printf("-Count Vowels-\n");
    countVowels("Hello World");
    countVowels("UAB CS");
    countVowels("Python");
    countVowels("aeiou");
}