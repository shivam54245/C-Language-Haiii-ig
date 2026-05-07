// Write a program to add and multiply two matrices of order NXN
#include <stdio.h>
int main() { int N;
    printf("Enter the order of the matrices (N x N): ");
    scanf("%d", &N);
    int matrixA[N][N], matrixB[N][N], sum[N][N], product[N][N];
    printf("Enter elements of Matrix A:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) { printf("Element [%d][%d]: ", i+1, j+1); scanf("%d", &matrixA[i][j]); } }
    printf("Enter elements of Matrix B:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) { printf("Element [%d][%d]: ", i+1, j+1); scanf("%d", &matrixB[i][j]); } }
    for (int i = 0; i < N; i++) { for (int j = 0; j < N; j++) { sum[i][j] = matrixA[i][j] + matrixB[i][j]; } }
    for (int i = 0; i < N; i++) { for (int j = 0; j < N; j++) { product[i][j] = 0;
        for (int k = 0; k < N; k++) { product[i][j] += matrixA[i][k] * matrixB[k][j]; } } } printf("Sum:\n[");
    for (int i = 0; i < N; i++) { printf("[");
        for (int j = 0; j < N; j++) { if (j == N - 1) { printf("%d", sum[i][j]); } else { printf("%d, ", sum[i][j]); } }
        if (i == N - 1) { printf("]]\n"); } else { printf("], "); } } printf("Product:\n[");
    for (int i = 0; i < N; i++) { printf("[");
        for (int j = 0; j < N; j++) { if (j == N - 1) { printf("%d", product[i][j]); } else { printf("%d, ", product[i][j]); } }
        if (i == N - 1) { printf("]]"); } else { printf("], "); } } }