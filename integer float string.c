/*/ Define a union called Data that contains the following members:
int i;
float f;
char str[20];
Write a program to:
Assign values to each member of the union one by one.
Print all members after each assignment. */

#include <stdio.h>
#include <string.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data d;

    // Assign integer
    printf("Enter an integer: ");
    scanf("%d", &d.i);

    printf("\nAfter assigning integer:\n");
    printf("d.i = %d\n", d.i);
    printf("d.f = %f\n", d.f);
    printf("d.str = %s\n\n", d.str);   // garbage because memory is shared

    // Assign float
    printf("Enter a float value: ");
    scanf("%f", &d.f);

    printf("\nAfter assigning float:\n");
    printf("d.i = %d\n", d.i);
    printf("d.f = %f\n", d.f);
    printf("d.str = %s\n\n", d.str);   // garbage again

    // Assign string
    printf("Enter a string: ");
    scanf("%s", d.str);

    printf("\nAfter assigning string:\n");
    printf("d.i = %d\n", d.i);
    printf("d.f = %f\n", d.f);
    printf("d.str = %s\n", d.str);

    return 0;
}
