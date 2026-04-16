#include<stdio.h>

int main() {

    struct Student 
    {
        int rollNum;
        int marks1;
        int marks2;
        int marksSum;
    };
    
    struct Student studentData[10];

    for (int i = 0; i < 10; i++) {
        printf("Student %d:", i + 1);

        scanf("%d", &studentData[i].rollNum);
        scanf("%d", &studentData[i].marks1);
        scanf("%d", &studentData[i].marks2);
        studentData[i].marksSum = studentData[i].marks1 + studentData[i].marks2;
    }

    for(int i = 0; i < 10; i++) {
        printf("Student %d: ", i + 1);
        printf("Roll Number: \n%d", studentData[i].rollNum);
        printf("Marks 1: \n%d", studentData[i].marks1);
        printf("Marks 2: \n%d", studentData[i].marks2);
        printf("Total Marks: %d\n\n\n", studentData[i].marksSum);
    }
    return 0;
}