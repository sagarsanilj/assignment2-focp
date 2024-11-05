#include <stdio.h>

int main() {
    int numStudents, i;
    int maxScore, minScore;

  
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    int marks[numStudents];

    printf("Enter the marks of %d students:\n", numStudents);
    for (i = 0; i < numStudents; i++) {
        printf("Marks of student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    maxScore = marks[0];
    minScore = marks[0];

    for (i = 1; i < numStudents; i++) {
        if (marks[i] > maxScore) {
            maxScore = marks[i]; 
        }
        if (marks[i] < minScore) {
            minScore = marks[i];
        }
    }

    printf("Maximum score: %d\n", maxScore);
    printf("Minimum score: %d\n", minScore);

    return 0;
}
