// Fuction and Recursion:

/*

#include<stdio.h>

int main(){

    void printHello();  // function prototype(Return type,function name)

    // function Defination;
    void PrintHello1(){
        printf("Hello");
    }

    // Function call:

    printHello();

    return 0;
}

*/

/*

#include<stdio.h>

void printHello();

int main() {

   printHello();
   printHello();
   printHello();

    return 0;
}

void printHello(){
    printf("Hello\n");
    printf("Hello Mritunjay\n");
}

*/

// Write 2 function one to print "Hello" & second to print "Good bey":

/*

#include<stdio.h>

void printHello();
void printGoodBye();

int main(){

    printGoodBye();
    printHello ();
    printHello ();
    printGoodBye();

    return 0;
}

void printHello(){
    printf("Hello\n");
    
}

void printGoodBye(){
    printf("Good Bye\n");
}

*/

// write a function that prints Namaste if user is Indian & Bonjour if user is French:

/*

#include<stdio.h>

void printNamaste();
void printBonjour();

int main(){
    char ch;
    printf("Enter i for Indian f for french ");
    scanf("%c",&ch);

    if(ch == 'i'){
        printNamaste();
    }

    else {
        printBonjour();
    }

    return 0;
}

void printNamaste(){
    printf("Namaste");
}

void printBonjour(){
    printf("Bonjour");
}

*/

// write a function to print sum of two number: 

/*

#include<stdio.h>

int sum(int a, int b);

int main() {
    int a, b;
    printf("Enter the value of a & b: ");
    scanf("%d%d",&a,&b);

    int s = sum(a,b);
    printf("sum is: %d",s);

    return 0;
}

int sum(int a, int b){
    return a+b;
}

*/

// write a function to print table of n:

/*

#include<stdio.h>

void printTable(int n);

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    printTable(n); // argument:

    return 0;
}

void printTable(int n){ // formal parameter:
    for(int i=1; i<=10; i++){
        printf("%d ",i*n);
    }
}

*/

// use library function to calculate the sqaure of a number given by user :

/*

#include<stdio.h>
#include<math.h>

int main() {

    int n =4;
    
    printf("Square of given no.: %d\n",pow(n,2));

    return 0;
}

*/

// Write function to calculate area of a square , acircle and a trieangel:

/*

#include<stdio.h>

void areaOfSquare(int side);
void areOfCircle(int radius);
void areOfRectangle(int length, int breadth);

int main(){
    int side;

    areaOfSquare(4);
    areOfCircle(5);
    areOfRectangle(4,5);

    return 0;
}

void areaOfSquare(int side){
    printf("Area of Square is: %d\n",side*side);
}

void areOfCircle(int radius){
    float area = 3.14*radius*radius;
    printf("Area of circle is: %f\n",area);
}

void areOfRectangle(int length, int breadth){
    printf("Area of Rectengle is: %d\n",length*breadth);
}

*/

// Write a program in C to swap two numbers using a function.

/*

#include<stdio.h>

void swap(int a , int b);

int main(){

    int a , b;
    printf("Enter the value of a and b: ");
    scanf("%d%d",&a,&b);
    printf("before swap: %d %d",a,b);
    swap(a , b);

    return 0;
}

void swap(int a , int b){
    int temp = a;
    a = b;
    b = temp;

    printf("\nAfter swaping: %d %d",a,b);
}

*/

// Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function.

// Write a program in C to convert a decimal number to a binary number using the function

// Write a program in C to check Armstrong and Perfect numbers using the function.

// 