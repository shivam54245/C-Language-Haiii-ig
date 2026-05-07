// Write a program to find the reverse of a number
#include <stdio.h>
int main() {
    int num, reverse = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    while (num != 0) {
        int remainder = num % 10;
        num /= 10;
        reverse = 10 * reverse + remainder; }
    printf("Reversed number: %d\n", reverse); }