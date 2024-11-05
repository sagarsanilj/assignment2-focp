#include <stdio.h>

int main() {
    int numStudents, i;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    int marks[numStudents];

    printf("Enter the marks of %d students:\n", numStudents);
    for (i = 0; i < numStudents; i++) {
        printf("Marks of student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    printf("\nGrades of students based on their marks:\n");
    for (i = 0; i < numStudents; i++) {
        char grade;

        if (marks[i] >= 75) {
            grade = 'A';
        } else if (marks[i] >= 60) {
            grade = 'B';
        } else if (marks[i] >= 40) {
            grade = 'C';
        } else {
            grade = 'D';
        }

        printf("Marks of student %d: %d - Grade: %c\n", i + 1, marks[i], grade);
    }

    return 0;
}
