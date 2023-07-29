// Looping: (for,while,do while)

// Write a programe to print number 0 to 10;

/* 

#include<stdio.h>

int main() {

    // for(int i=0;i<=10;i++){
    //     printf("%d\n",i);
    // }

    int i = 0;   
    // while(i<=10){
    //     printf("%d\n",i++);

    // }

    // for(char i='a';i<='z';i++){
    //     printf("%c ",i);
    // }
    // printf("\n");

    do{
        printf("%d ",i);
        i++;
    }
    while(i<=10);

    return 0;
}

*/

// print the sum of First n Natural Numbers.:

/*

#include<stdio.h>

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    int sum = 0;
    for(int i=1;i<=n;i++){
        sum = sum+i;
    }

    printf("%d",sum);

    return 0;
}

*/

// Function and recurtion:

/*
print:
*****
*****
*****
*****

*/

/*

#include<stdio.h>

int main(){
    for(int i=0;i<4;i++){
        for(int j = 0;j<5;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

*/

// write a programe to check given number is prime or not:

/*

#include<stdio.h>

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    int fact = 0;

    for(int i=1;i<=num;i++){
        if(num%i==0){
            fact++;
        }
    }

    if(fact ==2 ){
        printf("Given number is prime");
    }
    else{
        printf("Not prime");
    }

    return 0;
}

*/

//Write a programe to print prime no. in 1 to 100;

/*

#include<stdio.h>

int main() {

    int i,j, count;
    for(int i =1; i<=100;i++){
        count = 0;
        for(int j=1; j<=i; j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==2){
            printf("%d ",i);
        }
    }

    return 0;
}

*/

// print all number from 1 to 10 except for 6:

/*

#include<stdio.h>

int main() {

    for(int i=1; i<=10; i++){
        if(i==6){   // if(i<6 || i>6);
            continue;
        }

        printf("%d ",i);
    }

    return 0;
}

*/

// Print the factorial of a number n:

/*

#include <stdio.h>

int main() {

    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    int fact = 1;
    for(int i=1; i<=num; i++){
        fact *=i;
    }

    printf("%d",fact);

    return 0;
}

*/

//  print reverse of the table for a number n;

/*

#include<stdio.h>

int main() {

    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(int i=n*10; i>=n*1;i=i-n){
        if(i%n==0){
            printf("%d ",i);
        }
    }

    return 0;
}

*/

// Calculate the sum of all number between 5 ot 50 (including 5 & 50):

#include<stdio.h>

int main() {

    int sum =0;
    for(int i=5; i<=50; i++){
        sum +=i;
    }

    printf("sum = %d",sum);

    return 0;
}