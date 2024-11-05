#include <stdio.h>

int main() {
    int numStudents, i;
    int sum = 0;

    
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

   
    printf("The sum of all scores is: %d\n", sum);

    return 0;
}
