// Write a program to demonstrate the use of structure, union, and enumerated data type
#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

union Data {
    int i;
    float f;
    char c;
};

enum Color {
    RED,
    GREEN,
    BLUE
};

int main() {
    struct Student s1;
    s1.id = 1;
    strcpy(s1.name, "Shivam");
    s1.marks = 85.5;
    printf("ID: %d, Student's Name: %s, Marks: %.2f\n", s1.id, s1.name, s1.marks);
    
    union Data d;
    d.i = 10;
    printf("Int: %d\n", d.i);
    
    d.f = 3.14;
    printf("Float: %.2f\n", d.f);
    
    d.c = 'A';
    printf("Char: %c\n", d.c);
    
    enum Color color = RED;
    switch (color) {
        case RED:
            printf("Color: Red\n");
            break;
        case GREEN:
            printf("Color: Green\n");
            break;
        case BLUE:
            printf("Color: Blue\n");
            break;
    }
    
    return 0;
}