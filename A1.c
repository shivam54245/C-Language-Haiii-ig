#include<stdio.h>

int main() {
    int length;
    scanf("%d", &length);
    for (int i = 1; i <= length; i++) {
        
        for (int j = length; j >= i; j--) {
            printf(" ");
        }

        for (int j = i; j <= length; j++) {
            printf("*");
        }
        printf("\n");

    }

}