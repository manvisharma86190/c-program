#include <stdio.h>

int main() {
    int x = 5;
    printf("Initial value of x: %d\n", x);
    printf("\nPost-increment operation (x++):\n");
    printf("Value before post-increment: %d\n", x);
    printf("Value returned by x++: %d\n", x++);
    printf("Value after post-increment: %d\n", x);
    printf("\nPre-increment operation (++x):\n");
    printf("Value before pre-increment: %d\n", x);
    printf("Value returned by ++x: %d\n", ++x);
    printf("Value after pre-increment: %d\n", x);

    return 0;
}
