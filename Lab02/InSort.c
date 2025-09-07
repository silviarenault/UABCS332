#include <stdio.h>

int CreateArray(int N) {
    int arr[N];
    int i=0;
    while (i<N){
        printf("Please enter element %d of array: ", i+1);
        arr[i]=scanf("%d");
    }
    while (i<N){
        printf("%d", arr[i]);
    }
    return 0;
}


int main(int N) {
    printf("Please enter number of elements in array: ");
    scanf("%d", &N);
    CreateArray(N);
    return 0;
}
