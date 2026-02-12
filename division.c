#include<stdio.h>


int main() {

    int percent;
    printf("\n\nEnter your percentage between 0 to 100: \n");
    scanf("%d", &percent);

    if (percent >= 80) {
        printf("\nHounours!\n\n");
    }
    else{
        if (percent >= 60) {
        printf("\nFirst Division!\n\n");
    }
    else{
        if (percent >= 50) {
        printf("\nSecond!\n\n");
    }
    else{
         if (percent >= 40) {
        printf("\nThird!\n\n");
    }
    else{
        printf("\nFail!\n\n");
    }
    }
    }
    }
    return 0;
}