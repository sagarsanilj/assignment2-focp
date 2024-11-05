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

    printf("\nEven or Odd Scores:\n");
    for (i = 0; i < numStudents; i++) {
        if (marks[i] % 2 == 0) {
            printf("Marks of student %d: %d - Even\n", i + 1, marks[i]);
        } else {
            printf("Marks of student %d: %d - Odd\n", i + 1, marks[i]);
        }
    }

    return 0;
}
