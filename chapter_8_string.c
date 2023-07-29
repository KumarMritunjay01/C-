// SSTRUCTURE AND STREENG:

//Creat a String first & Last name to store details of user and and print all the carector using for loop:

/*

#include <stdio.h>

void printStreeng(char arr[]);

int main() {
    char fname[] = {'M','R','I','T','U','N','J','A','Y','\0'};
    char lname[] = "KUMAR";
// using String Formate specifier:
    printf("%s\n",lname);

    printStreeng(fname);
    printStreeng(lname);

    return 0;
}

void printStreeng(char arr[]){
    
    for(int i=0; arr[i] != '\0';i++){
        printf("%c",arr[i]);
    }
    printf("\n");

}

*/

// Taking String using %s:

/*

#include <stdio.h>

void printStr(char arr[]);

int main() {

    char fName[30];
    char lName[20];

    printf("Enter you first name: ");
    scanf("%s",fName);

    printf("Enter you last name: ");
    scanf("%s",lName);

    printf("first name is %s",fName);
    printf("\nlast Name is %s",lName);

    // printStr("%s",fName);

    return 0;
}

void printStr(char arr[]){
    for(int i=0; i !='\0'; i++){
        printf("%c",arr[i]);
    }
}

*/

// print full name of user:

/*

#include <stdio.h>

int main() {

    char fName[50];
    // char fName[] = "Mritunjay Kumar";
    printf("Enter you full name: ");
    scanf("%s",fName);


    printf("Your name is : %s",fName);

    // %s can't read data after sapace:

    return 0;
}

*/

// so we use  gets(str), fgets(str,n,file), puts(str)

/*

#include <stdio.h>

int main(){

    char str [100];
    printf("Enter you full name: ");
//FOR INPUT:
//  gets(str); 
    fgets(str,100,stdin);
// FOR OUTPUT:
    puts(str);

    return 0;
}

*/

// STRING USING POINTER:

/*

#include <stdio.h>

int main() {

// CHRECTER POINTER CAN BE CHANGEBALE:
    char *str = "Hello c";
    puts(str);
    str = "Hello";
    puts(str);

// array Notation can not be changeble:
    char name[] = "Mritunjay Kumar";
    puts(name);

    // name = "Mritunjay";
    // puts(name);

    return 0;
}

*/

// 49. Make a program that inputs user's name & print its length:

#include <stdio.h>

int countLength(char arr[]);

int main() {
    int name[100];
    fgets(name,100,stdin);

    puts(name);
    countLength(name);

}

int countLength(char arr[]){

    int count =0;
    for(int i=0; arr[i]!='\0'; i++){
        count++;    
    }

    return count;
}
