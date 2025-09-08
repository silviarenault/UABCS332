#include <stdio.h>

int Array(int N) {
    int arr[N];
    int i=0;
    while (i<N){
        int elmnt;
        printf("Please enter element %d of array: ", i+1);
        scanf("%d", &elmnt);
        arr[i]=elmnt;
        i++;
    }
    printf("Given array is: [%d", arr[0]);
        i=1;
        while (i<N){
            printf(", %d", arr[i]);
            i++;
        }
    printf("]\n");
    i=1;
    int j;
    while (i<N){
        j=i;
        while (j>0 && arr[j-1]>arr[j]){
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
        i++;
    }
    printf("Sorted array is: [%d", arr[0]);
    j=1;
    while (j<N){
        printf(", %d", arr[j]);
        j++;
    }
    printf("]\n");
    return 0;
}


int main(int N) {
    printf("Please enter number of elements in array: ");
    scanf("%d", &N);
    Array(N);
    return 0;
}
