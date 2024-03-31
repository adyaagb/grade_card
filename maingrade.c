#include <stdio.h>
#include "header.h"

int main() {
    int num_students;
    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    for (int i = 0; i < num_students; i++) {
        char name[50];
        float exam1_marks[5], exam2_marks[5];

        printf("\nStudent %d:\n\n", i + 1);
        inputStudentData(name, exam1_marks, exam2_marks);

        float avg1 = calculateAverage(exam1_marks, 5);
        float avg2 = calculateAverage(exam2_marks, 5);

	char grade1 = gradeAssignment(avg1);
	char grade2 = gradeAssignment(avg2);

        generateGradeCard(name,grade1,grade2);
    }

    return 0;
}
