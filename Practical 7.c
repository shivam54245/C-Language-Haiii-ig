// Write a program to print the sum even and odd numbers from 1 to N numbers.


#include<stdio.h>
int main() {
    int num, sum_even = 0, sum_odd = 0;
    printf("Enter the number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        if (i % 2 == 0) {
            sum_even += i;
        }
        else {
            sum_odd += i;
        }
    }

    printf("The sum of even integer upto %d is %d.\n", num, sum_even);
    printf("The sum of odd integers upto %d is %d.\n", num, sum_odd);
    return 0;
}