// Write a C program to reverse the elements of an array using a function.

#include <stdio.h>

// Function to reverse the array
void reverseArray(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    int temp;

    // Swap elements from both ends
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main() {
    int n;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call function to reverse
    reverseArray(arr, n);

    // Display reversed array
    printf("Reversed array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
