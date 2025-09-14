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

int* replaceEvenWithZero(int *arr, int len){
    int* replace=malloc(len*sizeof(int));
    
    for(int j=0;j<len;j++){
        if(arr[j]%2!=0){
            replace[j]=arr[j];
        }
        else{
            replace[j]=0;
        }
    }
    return replace;
}
   
bool perfectSquare(int n){
    printf("%d ",n);
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
    int test[]={123,405,0,7,-308};
    for(int i=0;i<(sizeof(test)/sizeof(test[0]));i++){
        printf("n=%d: %d\n",test[i],sumOfDigits(test[i]));
    }
   
    printf("\n");

    printf("-Max and Min Diff-\n");
    int mm1[]={3,7,2,9};
    int len=sizeof(mm1)/sizeof(mm1[0]);
    printf("arr= [3,7,2,9]: %d\n",UABMaxMinDiff(mm1,len));
    
    int mm2[]={5,5,5,5,5,5};
    len=sizeof(mm2)/sizeof(mm2[0]);
    printf("arr= [5,5,5,5,5,5]: %d\n",UABMaxMinDiff(mm2,len));
    
    int mm3[]={-2,4,-1,6,5};
    len=sizeof(mm3)/sizeof(mm3[0]);
    printf("arr= [-2,4,-1,6,5]: %d\n",UABMaxMinDiff(mm3,len));

    printf("\n");

    printf("-Replace Even with Zero-\n");
    int rz1[]={1,2,3,4};
    len=sizeof(rz1)/sizeof(rz1[0]);
    int* replaced=replaceEvenWithZero(rz1,len);
    printf("arr= [1,2,3,4]: [%d",replaced[0]);
    for(int i=1;i<len;i++){
        printf(", %d",replaced[i]);
    }
    printf("]\n");
    free(replaced);

    int rz2[]={2,4,6};
    len=sizeof(rz2)/sizeof(rz2[0]);
    replaced=replaceEvenWithZero(rz2,len);
    printf("arr= [2,4,6]: [%d",replaced[0]);
    for(int i=1;i<len;i++){
        printf(", %d",replaced[i]);
    }
    printf("]\n");
    free(replaced);

    int rz3[]={1,3,5};
    len=sizeof(rz3)/sizeof(rz3[0]);
    replaced=replaceEvenWithZero(rz3,len);
    printf("arr= [1,3,5]: [%d",replaced[0]);
    for(int i=1;i<len;i++){
        printf(", %d",replaced[i]);
    }
    printf("]\n");
    free(replaced);

    printf("\n");

    printf("-Perfect Square\n");
    int test2[]={16,15,25,36};
    for(int i=0;i<(sizeof(test2)/sizeof(test2[0]));i++){
        if(perfectSquare(test2[i]))
            printf("n=%d: True\n",test2[i]);
        else    
            printf("n=%d: False\n",test2[i]);
    }

    printf("\n");

    printf("-Count Vowels-\n");
    printf("s=Hello World: %d\n",countVowels("Hello World"));
    printf("s=UAB CS: %d\n",countVowels("UAB CS"));
    printf("s=Python: %d\n",countVowels("Python"));
    printf("s=aeiou: %d\n",countVowels("aeiou"));
}
