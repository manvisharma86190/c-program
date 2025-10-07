#include <stdio.h>

int main() {
    double num1, num2, result;
    char op;

    do {
        printf("\nEnter first number: ");
        scanf("%lf", &num1);

        printf("Enter an operator (+, -, *, /) or x to exit: ");
        scanf(" %c", &op);  

        if(op == 'x') {
            printf("Exiting calculator... Goodbye!\n");
            break;
        }

        printf("Enter second number: ");
        scanf("%lf", &num2);

        if(op == '+')
            result = num1 + num2;
        else if(op == '-')
            result = num1 - num2;
        else if(op == '*')
            result = num1 * num2;
        else if(op == '/') {
            if(num2 != 0)
                result = num1 / num2;
            else {
                printf("Error: Division by zero!\n");
                continue;  
            }
        } else {
            printf("Invalid operator!\n");
            continue;
        }

        printf("Result = %.2lf\n", result);

    } while(1);

    return 0;
}
