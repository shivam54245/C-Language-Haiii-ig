#include<stdio.h>
int main() {
    int num, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i+=2) {
        sum += i;
    }

    printf("Sum of odd integers upto %d equals: %d", num, sum);
    return 0;
}