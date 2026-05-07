// Write a program that finds the sum of diagonal elements of a MXN matrix
#include <stdio.h>
int main() {
    int M, N;
    printf("Enter the number of rows and columns (M x N):\n");
    scanf("%d %d", &M, &N);
    int matrix[M][N];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("Element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]); } }
    int sum = 0;
    for (int i = 0; i < M && i < N; i++) { sum += matrix[i][i]; }
    printf("Sum of diagonal elements: %d\n", sum); }