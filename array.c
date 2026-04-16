#include<stdio.h>

int main() {
    int array1[3][3];

// scan
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            scanf("%d", &array1[i][j]);
        }
    }


// print
     for (int i = 0; i < 3; i++) {
            printf("Value in array_1 at (%d,%d) is %d\n", i, i, array1[i][i]);
    }
    printf("\n\n");

}