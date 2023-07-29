// Write a program in C to display the n terms of odd natural number and their sum . 

#include <stdio.h>

int main() {
    int i,n,sum;
    sum =0;
    printf("Enter the number");
    scanf("%d",&n);
    printf("The odd natural num is:\n");
    for(i=1;i<=n;i+=2) {

        
        printf("%d\n",i);
        sum =sum+i;
        
    }
    printf("And there sumation is : \n");
    printf("%d\n",sum);
    
    return 0;

    
}