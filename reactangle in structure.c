/* Define a structure Rectangle with members:
int length;
int breadth;
Write a function struct Rectangle inputRectangle() that takes input for a rectangle and returns it.
Write another function int area(struct Rectangle r) that returns the area. */

#include <stdio.h>

// Define structure
struct Rectangle {
    int length;
    int breadth;
};

// Function to take input and return a Rectangle
struct Rectangle inputRectangle() {
    struct Rectangle r;
    printf("Enter length: ");
    scanf("%d", &r.length);
    printf("Enter breadth: ");
    scanf("%d", &r.breadth);
    return r;
}

// Function to calculate area
int area(struct Rectangle r) {
    return r.length * r.breadth;
}

int main() {
    struct Rectangle rect;

    printf("Enter details of the rectangle:\n");
    rect = inputRectangle();

    int a = area(rect);
    printf("\nArea of the rectangle = %d\n", a);

    return 0;
}