/*

#include <stdio.h>

void square (int n);
void _square(int *n);

int main() {

    int num = 5;

    square (num);
    printf("\nnum is %d ",num);

    _square(&num);
    printf("\nnum is %d ",num);

    
    return 0;
}

void square (int n){

    n = n*n;
    printf("Square is %d",n);
}

void _square(int *n){

    *n = (*n) * (*n);    // 5*5
    printf("\nSquare is : %d",*n);
}

*/

// 38. swap 2 numbers , a & b :

/*

#include <stdio.h>

void swap(int a , int b);
void _swap(int *a, int *b);

int main() {

    int a, b;
    a = 10;
    b = 20;

    swap(a , b);

    printf("\npass by refrence \na = %d \nb = %d",a,b);

    _swap(&a, &b);

    printf("\npass by value \na = %d \nb = %d",a,b);

    return 0;
}

//function pass by value:

void swap(int a , int b){
    int t = a;
    a = b;
    b = t;
    printf("/pass by refrence \na = %d \nb = %d",a,b);

    // _swap(&a, &b);
    // printf("\na = %d \nb = %d",a,b);
}

// function pass by value:

void _swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;

    printf("\npass by value \na = %d \nb = %d ",*a,*b);
}

*/

// write a function to calculate the sum, product & average of two number. print that avrage in the main function:

/*

#include <stdio.h>

int sum( int a, int b);
int product(int a , int b);
float average (int a, int b);

int main() {

    int a = 5;
    int b = 6;

    
    printf("sum is %d",sum( a,b));
    printf("\nproduct is %d",product( a,b));
    printf("\naverge is %f",average( a,b));


    return 0;
}

int sum( int a, int b){
    return a+b;
}

int product(int a , int b){
    return a*b;
}

float average (int a, int b){
    
    return (a+b)/2;
}

*/

// Using pointer:

#include <stdio.h>

int doWork(int a, int b, int *sum, int *prod, int *avg);

int main(){

    int a = 3;
    int b = 5;

    int sum , avg, prod;

    doWork(a,b,&sum,&prod,&avg);

    printf("sum = %d \nproduct = %d \navrage = %d",sum,prod,avg);

    return 0;
}

int doWork(int a, int b, int *sum, int *prod, int *avg){

    *sum = a+b;
    *prod = a*b;
    *avg = (a+b)/2;

}