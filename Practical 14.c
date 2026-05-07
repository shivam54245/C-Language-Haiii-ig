// Write a program to find maximum and minimum element in the array
#include<stdio.h>
int main() {
    int n, i, max, min;
    printf("Enter the number of elements in the array: ");
    int arr[n+1];
    scanf("%d", &n);
    printf("Enter the elements of the array: \n");
    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]); }
    max = arr[0];
    min = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > max) { max = arr[i]; }
        if(arr[i] < min) { min = arr[i]; } }
    printf("Maximum element in the array is: %d\n", max);
    printf("Minimum element in the array is: %d\n", min); }