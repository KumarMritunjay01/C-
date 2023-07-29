// write a programe to enter carector is uper case or not:

/*

#include<stdio.h>

int main(){
    char ch ;
    printf("Enter the charector: ");
    scanf("%s",&ch);

    if(ch>='A'&& ch<='Z'){
        printf("Upercase");
    }
    else if(ch>='a' && ch<='z'){
        printf("Lowercase: ");
    }

    else{
        printf("not english letter: ");
    }

    return 0;
}

*/

// Write a programe to check if a given number is Armstrong number or not:

/*

#include<stdio.h>

int main() {

    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    int num1 = num;

    int sum = 0;
    while(num1>0){
        sum = sum+ (num1%10)*(num1%10)*(num1%10);
        num1 = num1/10;
    }

    printf("%d\n",sum);

    if(num==sum){
        printf("Given number is armstrong number: ");
    }

    else{
        printf("not");
    }

    return 0;
}

*/

// write a programe to check if the given number is a natural number.

/*

#include<stdio.h>

int main() {

    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    if(num>0){
        printf("Given number is natural Number: ");
    }

    else{
        printf("Given number is not natural no.: ");
    }

    return 0;
}

*/

// Write a C program to input an alphabet and check whether it is vowel or consonant using switch case.

/*

#include<stdio.h>

int main() {

    char ch;
    printf("Enter the charector: ");
    scanf("%c",&ch);

    switch(ch){

        case 'a':
            printf("Vowel");
            break;

        case 'e':
            printf("Vowel");
            break;

        case 'i':
            printf("Vowel");
            break;

        case 'o':
            printf("Vowel");
            break;

        case 'u':
            printf("Vowel");
            break;

        case 'A':
            printf("Vowel");
            break;

        case 'E':
            printf("Vowel");
            break;

        case 'I':
            printf("Vowel");
            break;

        case 'O':
            printf("Vowel");
            break;

        case 'U':
            printf("Vowel");
            break;


        default:
            printf("consonant");
            break;
    }

    return 0;
}

*/

// Write a C program to input two numbers from user and find maximum between two numbers using switch case.

/*

#include<stdio.h>

int main() {

    int num1 , num2;
    printf("Enter the num1 and num2: ");
    scanf("%d%d",&num1,&num2);

    switch(num1>num2){

        case 1:
            printf("Num1 > num2");    
            break;

        case 0:
            printf("num2 > num1:");
            break;
    }

    return 0;
}

*/

// write a program to given number is odd or even using switch statements:

/*

#include<stdio.h>

int main() {

    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    switch(num%2){

        case 0:
            printf("even");
            break;

        case 1:
            printf("Odd");
            break;
    }

    return 0;
}

*/

// write a program to check number is positive , Negative and Zero:

/*

#include<stdio.h>

int main() {

    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    switch(num>0){

        case 1:
            printf("Positive");
            break;

        case 0:
            switch(num<0){
                case 1:
                    printf("Negative");
                    break;

                case 0:
                    printf("Zero");
            }
            
    }

    return 0;
}

*/

// Write a program to find root of quadratic equation:

// write a programe to creat a simple calculator using switch statment:

#include<stdio.h>

int main() {

    int num1 , num2;
    char opretion;
    printf("Enter value and operation ");
    scanf("%d %c %d",&num1,&opretion,&num2);
    

    switch(opretion){
        case '+':
            printf("addition is : %d",num1+num2);
            break;

        case '-':
            printf("Subtraction is %d",num1-num2);
            break;

        case '*':
            printf("Multiplication is %d",num1*num2);
            break;

        case '/':
            printf("Division is : %d ",num1/num2);
            break;

        default:
            printf("Please Enter valide operation: ");
    }

    return 0;
}