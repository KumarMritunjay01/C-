// Print 5 times of Hello World using Recursion:

/*

#include<stdio.h>

void printHello(int count);

int  main() {

    printHello(5);
    return 0;
}

void printHello(int count){
    printf("Hello World: \n");

    if(count == 1){
        return;
    }

    printHello(count-1);
}

*/

// write a programe to print sum of n natural number using recursion:

/*


#include<stdio.h>

int sum (int n);

int main() {

    int n;
    printf("Enter the last digit: ");
    scanf("%d",&n);

    int finalSum = sum(n);

    printf("final sum = %d",finalSum);

    return 0;
}

int sum (int n){
    if(n == 1){
        return;
    }

    int sumOfNaturalNo = sum(n-1);
    int finalSumOfNatural = sumOfNaturalNo + n;

    return finalSumOfNatural;
}

*/

// print Factorial of n using Recursion:

/*

#include<stdio.h>

int printFactorial (int n);

int main(){

    int final = printFactorial (4);

    printf("Factorial is %d \n",final); 

    return 0;
}

int printFactorial (int n){
    if(n == 0){
        return 1 ;
    }

    int factorial = printFactorial (n-1);
    int finalFactorial = factorial * n;

    return finalFactorial;
}

*/

// Write a programe to convert celsius to fahrenheit.(5:05)

/*

#include<stdio.h>

float convertTemp(int c);

int main(){

    int c;
    printf("Enter the valude of celsious: ");
    scanf("%d",&c);

    printf("ferenheith : %f\n",convertTemp(c));

    return 0;
}

float convertTemp(int c){
    int farenheight = c*(9.0/5.0)+32;
    return farenheight;
}

*/

// Write a functuon to calculate percentage of students from marks in Science , Maths & Sanskrit.


// Write a function to print n term of the fabonacci sequence.


// #include<stdio.h>

// void favonacii();

// int main(){

//     favonacii();

//     return 0;
// }

// void favonacii(){
//     int i = 0;
//     int j = 1;
//     int k = i+j;

//     printf("%d %d %d\n",i,j,k);

//     if(i == )
    
// }