// write a programe to print area of rectengle taking input from user:

#include<stdio.h>
int main(){
    int length;
    int breadth;

    scanf("%d",&length);
    scanf("%d",&breadth);

    int area = length*breadth;
    
    printf("%d",area);
    return 0;
}