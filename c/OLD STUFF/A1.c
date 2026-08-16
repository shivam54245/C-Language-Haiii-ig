#include<stdio.h>

int main() {
    int length = 5;
    //scanf("%d", &length);
    for (int i = 1; i <= length; i++) {
        
        for (int j = length; j >= i; j--) {
            printf(" ");
        }

        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");

    }

}