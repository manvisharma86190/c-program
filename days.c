#include <stdio.h>
int main(){
    int number;
    printf("enter the number between 1-7: ");
    scanf("%d",&number);
    switch(number){
        case 1:
        printf("Monday \n");
        break;
        case 2:
        printf("Tuesday \n");
        break;
        case 3:
        printf("wednesday /n");
        break;
        case 4:
        printf("thursday \n");
        break;
        case 5:
        printf("friday \n");
        break;
        case 6:
        printf("saturday \n");
        break;
        case 7:
        printf("sunday \n");
        break;
        default:
        printf("Invalid input \n");

    }
    return 0;
}
