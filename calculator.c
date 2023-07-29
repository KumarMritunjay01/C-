#include<stdio.h>

int main() {

    float num1 , num2;
    char opretion;
    printf("Enter value and operation ");
    scanf("%f %c %f",&num1,&opretion,&num2);
    

    switch(opretion){
        case '+':
            printf("addition is : %f",num1+num2);
            break;

        case '-':
            printf("Subtraction is %f",num1-num2);
            break;

        case '*':
            printf("Multiplication is %f",num1*num2);
            break;

        case '/':
            printf("Division is : %f ",num1/num2);
            break;

        default:
            printf("Please Enter valide operation: ");
    }

    return 0;
}