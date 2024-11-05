#include <stdio.h>

int main() {
    int numStudents, i;
    int index = -1; 

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
            index = i; 
            break; 
        }
    }

    if (index != -1) {
        printf("The first student who scored 99 is at index: %d\n", index);
    } else {
        printf("No student scored 99.\n");
    }

    return 0;
}
