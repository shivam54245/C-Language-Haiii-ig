#include<stdio.h>

int main() {
    int num_1 = 1, num_2 = 1, n = 10, sum;
    printf("%d, ", num_1);
    printf("%d, ", num_2);

    for (int i = 0; i <= n; i++) {
        sum = num_1 + num_2;
        printf("%d, ", sum);
        num_2 = sum;
        num_1 = num_2;
    }

    printf(" ....");
}