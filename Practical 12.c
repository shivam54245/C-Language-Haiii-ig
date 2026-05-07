// Write a program to enter a number and display it in words.
#include<stdio.h>
void digitPrint(int digit) {
    if (digit > 9) {
        digitPrint(digit / 10);
        digitPrint(digit % 10);
    } else {
        switch (digit) {
            case 1: printf("One "); break;
            case 2: printf("Two "); break;
            case 3: printf("Three "); break;
            case 4: printf("Four "); break;
            case 5: printf("Five "); break;
            case 6: printf("Six "); break;
            case 7: printf("Seven "); break;
            case 8: printf("Eight "); break;
            case 9: printf("Nine "); break;
            case 0: printf("Zero "); break;
            default: break; } } }
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    digitPrint(num); }