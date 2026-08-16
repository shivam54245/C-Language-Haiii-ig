// Write a program to check weather a given number is prime or not.


#include<stdio.h>
int main() {
    int num, is_prime = 1;
    printf("Enter a number :");
    scanf("%d", &num);
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            is_prime = 0;
            break;
        }
    }
    if (is_prime) {
        printf("%d is a prime number.", num);
    }
    else {
        printf("%d is not a prime number.", num);
    }
    return 0;
}