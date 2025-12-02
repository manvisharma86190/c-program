/* Write a C program to define a structure called Student with the following members:
name (string of max 50 characters)
SAP ID (integer)
marks (float)
Create an array of 5 students, take input for each, and display the details of all students. */

#include <stdio.h>

struct Student {
    char name[50];
    int sap_id;
    float marks;
};

int main() {
    struct Student s[5];
    int i;

    // Taking input for 5 students
    for (i = 0; i < 5; i++) {
        printf("\nEnter details of Student %d:\n", i + 1);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter SAP ID: ");
        scanf("%d", &s[i].sap_id);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Displaying all students' details
    printf("\n\n---- Student Details ----\n");
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("SAP ID: %d\n", s[i].sap_id);
        printf("Marks: %.2f\n", s[i].marks);
    }

    return 0;
}