// Write a C program to find the maximum and minimum elements in an array using functions

#include <stdio.h>

// Function to find maximum value
int findMax(int arr[], int n) {
    int max = arr[0];   // assume first element is max
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Function to find minimum value
int findMin(int arr[], int n) {
    int min = arr[0];   // assume first element is min
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int n;

    // Taking number of elements from user
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calling functions
    int maximum = findMax(arr, n);
    int minimum = findMin(arr, n);

    // Display the results
    printf("Maximum value = %d\n", maximum);
    printf("Minimum value = %d\n", minimum);

    return 0;
}