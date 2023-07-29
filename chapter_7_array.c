/*

#include <stdio.h>

int main() {

    float age = 33.33;
    float *ptr = &age;

    printf("%u",ptr);
    ptr++;
    printf("\n%u",ptr);

    return 0;
}

*/

// We can subtract one pointer from another:

/*

#include <stdio.h>

int main() {

    int  age1 = 22;
    int age2 = 30;

    int *ptr1 = &age1;
    int *ptr2 = &age2;

    printf("subtraction is %u\n",ptr1-ptr2);

    return 0;
}

*/

// int *ptr = &arr[0];
// int *ptr = arr;

/*

#include <stdio.h>

int main(){

    int arr [6];
    int *ptr = &arr[0];

    for(int i = 0; i<6; i++){
        printf("index %d = ",i);
        scanf("%d",&arr[i]);
    }

    for(int i =0; i<6; i++){
        printf("%d intdex = %d\n",i,ptr[i]);
    }

    return 0;
}

*/

// Array as Function Argument:

// #include <stdio.h>

// // Fuction Declaration:
// void PrintNumbers(int arr[],int n);

// // OR

// void printNumber(int *arr2,int n);

// int main() {

//     // Function Call:
//     printNumbers(&arr[0],2);

//     return 0;
// }

// void PrintNumbers(int arr[],int n){
//     print("%d",arr[0]);
// }

/*

#include <stdio.h>

void printNumbers(int *arr,int n); // arr[] or *arr

int main() {

    int arr[] = {1,2,3,4,5,6};
    printNumbers(arr,6);

    return 0;
}

void printNumbers(int arr[],int n){
    for(int i=0; i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

*/

/*

Multidimensional Arrays:
2D array;

int arr[] [] = {{1,2},{3,4}};

//Access 

arr[0][0];
arr[0][1];
arr[1][0];
arr[1][1];

*/

// Write a function to count the number of odd numbers in an array:

/*

#include <stdio.h>

int  countOddNumber(int arr[],int n);

int main() {

    // Initialisation of array:
    int arr[] = {1,2,3,4,5,6,7,8,9};

    // Calling array:
    int final_count = countOddNumber(arr,9);
    printf("%d",final_count);

    return 0 ;
}

int  countOddNumber(int arr[],int n){
    int count = 0;
    for(int i =0; i<n; i++){
        if(arr[i]%2 != 0){
            count ++;
        }
    }
   return count;
}

*/

// 44. write a function to reverse an array:

/*

#include <stdio.h>

void printReverseArray( int *arr,int n);

int main() {

    int arr[] = {1,2,3,4,5};
    printReverseArray(arr,5);
    return 0;
}

void printReverseArray( int *arr,int n){
    for(int i=n-1; i>=0;i--){
        printf("%d  ",arr[i]);
    }
}

*/

// Write a program to store the first n fibonacii number:
//Write a 2D array, storing the tables of 2 & 3:
