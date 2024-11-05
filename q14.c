#include <stdio.h>

void printDuplicates(int arr[], int n) {
    int freq[100001] = {0};  // Assuming elements are within a range (0 to 100000)
    int foundDuplicate = 0;

    // Count the frequency of each element
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // Print elements that appear more than once
    for (int i = 0; i < 100001; i++) {
        if (freq[i] > 1) {
            printf("%d ", i);
            foundDuplicate = 1;
        }
    }

    // If no duplicates found, print -1
    if (!foundDuplicate) {
        printf("-1");
    }

    printf("\n");
}

int main() {
    int arr1[] = {2, 10, 10, 100, 2, 10, 11, 2, 11, 2};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Duplicates in first array: ");
    printDuplicates(arr1, n1);

    int arr2[] = {5, 40, 1, 40, 100000, 1, 5, 1};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Duplicates in second array: ");
    printDuplicates(arr2, n2);

    return 0;
}
