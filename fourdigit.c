#include <stdio.h>

int main() {
    int num, digit1, digit2, digit3, digit4, sum;
    printf("Enter a four-digit integer: ");
    scanf("%d", &num);
    digit4 = num % 10;        
    digit3 = (num / 10) % 10; 
    digit2 = (num / 100) % 10; 
    digit1 = (num / 1000) % 10; 
    sum = digit1 + digit2 + digit3 + digit4;
    printf("Sum of digits: %d\n", sum);

    return 0;
