#include <stdio.h>

int CreateArray(int N) {
    int arr[N];
    int i=0;
    while (i<N){
        int elmnt;
        printf("Please enter element %d of array: ", i+1);
        scanf("%d", &elmnt);
        arr[i]=elmnt;
        i++;
    }
    return 0;
}


int main(int N) {
    printf("Please enter number of elements in array: ");
    scanf("%d", &N);
    CreateArray(N);
    return 0;
}
