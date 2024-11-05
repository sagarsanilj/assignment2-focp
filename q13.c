#include <stdio.h>

void rotateArrayClockwise(int arr[], int n) {
    /
    int last = arr[n - 1];
    
    
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    
   
    arr[0] = last;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    / Print original array
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Rotate the array clockwise by one
    rotateArrayClockwise(arr, n);

    // Print rotated array
    printf("Rotated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
