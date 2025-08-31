#include <stdio.h>
#include <stdbool.h>

bool prime (int given_number){
    
    if (given_number < 2)
        return false;
    if (given_number == 2 || given_number%2 != 0)
        return true;
}

int main (int given_number) {

    printf("Write an integer: ");
    scanf("%d", &given_number);

    if (prime(given_number))
        printf("The number is prime\n");
    else   
        printf("The number is not prime\n");


    return 0;
}