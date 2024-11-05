#include <stdio.h>

int main() {
    int numStudents, i;

    // Ask for the number of students
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Declare an array to hold the marks
    int marks[numStudents];

    // Input the marks for each student
    printf("Enter the marks of %d students:\n", numStudents);
    for (i = 0; i < numStudents; i++) {
        printf("Marks of student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Increase each student's marks by 5
    for (i = 0; i < numStudents; i++) {
        marks[i] += 5;
    }

    // Print the updated marks
    printf("\nUpdated marks after increasing by 5:\n");
    for (i = 0; i < numStudents; i++) {
        printf("Marks of student %d: %d\n", i + 1, marks[i]);
    }

    return 0;
}
