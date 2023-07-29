/*
9. Write a program in C to display a pattern like a right angle triangle using an asterisk.
*
**
***
****

*/

/*

#include<stdio.h>

int main(){

    int row;
    printf("Enter the roll no.: ");
    scanf("%d",&row);

    for(int i =1; i<=row; i++){
        for(int j =1; j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

*/

/*  
13. Write a program in C to make a pyramid pattern with numbers increased by 1. Go to the editor
   1 
  2 3 
 4 5 6 
7 8 9 10

*/


#include<stdio.h>

int main() {
    int num =1;
    for(int i=1;i<=4;i++){
        for(int j=4-i;j>0;j--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d",i);
            printf(" ");
        }
        printf("\n");
    }

    return 0;


}
//Write a C program to calculate the factorial of a given number.

/*

#include <stdio.h>

int main(){
    int num;
    printf("Enter the num: ");
    scanf("%d",&num);

    int factorial = 1;
    for(int i =1;i<=num;i++){
        factorial = factorial*i;
    }

    printf("factorial of given no. is: %d",factorial);

    return 0;
}

*/

// 17 DONE 

