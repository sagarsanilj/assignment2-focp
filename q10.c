#include <stdio.h>


int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int numElements, count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &numElements);

    int arr[numElements];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < numElements; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < numElements; i++) {
        if (isPrime(arr[i])) {
            count++; 
        }
    }

    printf("Total prime numbers in the array: %d\n", count);

    return 0;
}
