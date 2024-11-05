#include <stdio.h>

int main() {
    int numStudents, i;
    int sum = 0;
    float average; 

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    int marks[numStudents];

    printf("Enter the marks of %d students:\n", numStudents);
    for (i = 0; i < numStudents; i++) {
        printf("Marks of student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    for (i = 0; i < numStudents; i++) {
        sum += marks[i]; 
    }

    average = (float)sum / numStudents; 

    printf("The average score is: %.2f\n", average);

    return 0;
}
