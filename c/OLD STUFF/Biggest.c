#include<stdio.h>

int main() {
    
    int a, b, c;
    printf("\n\nEnter three non equal numbers: \n");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a > b && a > c) {
        printf("\n%d is the greatest.\n\n", a);
    }
    
    else {
        if (b > a && b > c) {
            printf("\n%d is the greatest.\n\n", b);
        }
        else {
            printf("\n%d is the greatest.\n\n", c);
        }
    }




}
