#include <stdio.h>

int main() {
    int numStudents, i;
    int count = 0;
    int indices[100]; 

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    int marks[numStudents];

    printf("Enter the marks of %d students:\n", numStudents);
    for (i = 0; i < numStudents; i++) {
        printf("Marks of student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    for (i = 0; i < numStudents; i++) {
        if (marks[i] == 99) {
            indices[count] = i; 
            count++; 
        }
    }

    
    if (count > 0) {
        printf("Number of students who scored 99: %d\n", count);
        printf("Indices of students who scored 99: ");
        for (i = 0; i < count; i++) {
            printf("%d ", indices[i]);
        }
        printf("\n");
    } else {
        printf("No student scored 99.\n");
    }

    return 0;
}
