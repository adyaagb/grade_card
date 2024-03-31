#ifndef HEADER_H
#define HEADER_H

void inputStudentData(char name[], float exam1_marks[], float exam2_marks[]);
float calculateAverage(float marks[], int size);
char gradeAssignment(float avg);
void generateGradeCard(char name[], char grade1, char grade2);

#endif
