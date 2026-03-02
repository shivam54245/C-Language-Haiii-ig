// Write a program to print the Fibonacci series.


#include<stdio.h>
int main() {
    int num1 = 0, num2 = 1, sum, num_end;
    printf("Enter the number of terms: ");
    scanf("%d", &num_end);
    printf("Fibonacci Series: %d, %d, ", num1, num2);
    for (int i = 0; i <= num_end - 3; i++) {
        sum = num1 + num2;
        printf("%d, ", sum);
        num1 = num2;
        num2 = sum;
    }
    printf("...\n");
    return 0;
}