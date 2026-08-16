// Write a program that accepts temperature in Centigrade and converts it to Fahrenheit.


#include <stdio.h>
int main() {
    float celsius, fahrenheit;
    printf("Enter temperature in Centigrade: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f Centigrade is equal to %.2f Fahrenheit\n", celsius, fahrenheit);
    return 0;
}