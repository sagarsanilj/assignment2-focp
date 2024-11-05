#include <stdio.h>

int main() {
    int numElements, i;

   
    printf("Enter the number of elements: ");
    scanf("%d", &numElements);

   
    int arr[numElements];

    printf("Enter the elements of the array:\n");
    for (i = 0; i < numElements; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < numElements; i++) {
     
        if ((i == 0 || arr[i] >= arr[i - 1]) && (i == numElements - 1 || arr[i] >= arr[i + 1])) {
            printf("Peak element found: %d at index %d\n", arr[i], i);
        }
    }

    return 0;
}
