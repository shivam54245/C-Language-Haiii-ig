#include<stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d", &a, &b);
    printf("\n\n\nBEFORE SWAPPING: \n The first number : %d \n The second number: %d", a, b);
    c = a;
    a = b;
    b = c;
    printf("\n\n\nAFTER SWAPPING: \n The first number : %d \n The second number: %d", a, b);
}