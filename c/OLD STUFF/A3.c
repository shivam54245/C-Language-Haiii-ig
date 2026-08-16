#include<stdio.h>

int main() {
    float sum = 0.0;
    int depth = 1;
    
    for (int i = 0; i <= depth; i++) {
        int mul = 1;
        for (int j = 1; j <= i; j++) {
            mul *= j;
        }
    
    sum += 1.0/mul;
        }
    printf("%f", sum);
}

