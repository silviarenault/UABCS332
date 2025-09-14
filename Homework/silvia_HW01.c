#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int sumOfDigits(int n){
    int ttl=0;
    if(n<1){
        return -1;
    }
    else{
    char s[100];
    sprintf(s, "%d", n);
    int len=strlen(s);
    for(int i=0;i<len;i++){
        char c=s[i];
        int num=c-'0';
        ttl+=num;
    }
   return ttl;
    }
}

int UABMaxMinDiff(int *arr, int len){
    int diff;
    int max=arr[0];
    int min=arr[0];
    for(int j=0;j<len;j++){
        if(arr[j]>max){
            max=arr[j];
        }
        if(arr[j]<min){
            min=arr[j];
        }
    }
    diff=max-min;
    return diff;
}

int replaceEvenWithZero(int *arr, int len){
    int replace[len];
    for(int j=0;j<len;j++){
        if(arr[j]%2!=0){
            replace[j]=arr[j];
        }
        else{
            replace[j]=0;
        }
    }
    return *replace;
}
    
bool perfectSquare(int n){
    for(int i=n-1;i>0;i--){
        if(i==abs(n/i)){
            return true;
            }
    }
    return false;
}

int countVowels(char *s){
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
    return ttl;
}

int main(){

    printf("-Sum of Digits-\n");
    printf("n=123: %d\n",sumOfDigits(123));
    printf("n=405: %d\n",sumOfDigits(405));
    printf("n=0: %d\n",sumOfDigits(0));
    printf("n=7: %d\n",sumOfDigits(7));
    printf("n=-308: %d\n",sumOfDigits(-308));    

    printf("-Max and Min Diff-\n");
    int mm1[]={3,7,2,9};
    int len=sizeof(mm1)/sizeof(mm1[0]);
    printf("arr= [3,7,2,9]: %d",UABMaxMinDiff(mm1,len));
    int mm2[]={5,5,5,5,5,5};
    len=sizeof(mm2)/sizeof(mm2[0]);
    printf("arr= [5,5,5,5,5,5]: %d",UABMaxMinDiff(mm2,len));
    int mm3[]={-2,4,-1,6,5};
    len=sizeof(mm3)/sizeof(mm3[0]);
    printf("arr= [-2,4,-1,6,5]: %d",UABMaxMinDiff(mm3,len));

    printf("-Replace Even with Zero-\n");
    int rz1[]={1,2,3,4};
    len=sizeof(rz1)/sizeof(rz1[0]);
    int rz2[]={2,4,6};
    len=sizeof(rz2)/sizeof(rz2[0]);
    replaceEvenWithZero(rz2,len);
    int rz3[]={1,3,5};
    len=sizeof(rz3)/sizeof(rz3[0]);
    replaceEvenWithZero(rz3,len);

    printf("-Perfect Square\n");
    if(perfectSquare(16))
        printf("n=16: True\n");
    else
        printf("n=16: False\n");
    if(perfectSquare(15))
        printf("n=15: True\n");
    else   
        printf("n=15: False\n");
    if(perfectSquare(25))
        printf("n=25: True\n");
    else   
        printf("n=25: False\n");
    if(perfectSquare(36))
        printf("n=36: True\n");
    else   
        printf("n=36: False\n");

    printf("-Count Vowels-\n");
    printf("s=Hello World: %d\n",countVowels("Hello World"));
    printf("s=UAB CS: %d\n",countVowels("UAB CS"));
    printf("s=Python: %d\n",countVowels("Python"));
    printf("s=aeiou: %d\n",countVowels("aeiou"));
}
