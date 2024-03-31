#include <stdio.h>
#include "header.h"
const char *subject_names[] = {"DSA", "DBMS", "OS", "COA", "CN"};


void inputStudentData(char name[], float exam1_marks[], float exam2_marks[]) {
    printf("Enter student name: ");
    scanf("%49s", name);
    for (int i = 0; i < 5; i++) { 
        printf("%s: ", subject_names[i]); 
        scanf("%f", &exam1_marks[i]);
    }

    printf("Enter marks for exam 2:\n");
    for (int i = 0; i < 5; i++) { 
        printf("%s: ", subject_names[i]); 
        scanf("%f", &exam2_marks[i]);
    }
}

float calculateAverage(float marks[], int size) 
    {
    float sum = 0.0;
    for (int i = 0; i < size; i++) 
    {
        sum += marks[i];
    }
    return sum / size;
}

char gradeAssignment(float avg) {
    char grade;

    if (avg >= 90) {
        grade = 'S';
    } else if (avg >= 80) {
        grade = 'A';
    } else if (avg >= 70) {
        grade = 'B';
    } else if (avg >= 60) {
        grade = 'C';
    } else if (avg >= 50) {
        grade = 'D';
    } else if (avg >= 40) {
        grade = 'E';
    } else {
        grade = 'F';
    }

    return grade;
}




void generateGradeCard(char name[], char grade1, char grade2) 
{
    printf("\n===== Grade Card =====\n");
    printf("Name: %s\n", name);
    printf("Exam 1 Grade: %c\n", grade1);
    printf("Exam 2 Grade: %c\n", grade2);

}
