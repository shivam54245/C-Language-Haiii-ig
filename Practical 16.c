// Write a program in C to find the transpose of a given matrix.
#include <stdio.h>
int main() {
    int rows, cols;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    int transpose[cols][rows];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]); } }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) { transpose[j][i] = matrix[i][j]; } }
    printf("Transpose of the matrix:\n[");
    for (int i = 0; i < cols; i++) { 
        printf("[");
        for (int j = 0; j < rows; j++) {
            if (j == rows - 1) { printf("%d", transpose[i][j]); } 
            else { printf("%d, ", transpose[i][j]); } } 
        if (i == cols - 1) { printf("]"); }
        else { printf("], "); }
    } printf("]"); }