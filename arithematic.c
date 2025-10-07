#include <stdio.h>
int main(){
    float num1, num2;
    char operator;
    printf("enter the first number: \n");{
    scanf("%f",&num1);
}
    printf("enter the operator (+, -, *, /):");{
    scanf(" %c",&operator);}
    printf("enter the second number: \n");{
    scanf("%f",&num2);}
    switch(operator){
        case '+':
        printf("result = %f \n",num1 +num2);
        break;
        case '-':
         printf("result = %f \n",num1 -num2);
         break;
         case '*':
         printf("result = %f \n",num1*num2);
         break;
         case '/':
         if(num2 !=0)
          printf("result = %f \n",num1/num2);
          else
          printf("error! division by zero is not possible");
          break;
          default:
          printf("invalid operator \n");



    }
    return 0;
}
