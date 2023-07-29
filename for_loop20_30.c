// 21. Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...].

/*

#include <stdio.h>

int main() {
    int i ,j , n, k,sum;

    printf("Enter the terms:");
    scanf("%d",&n);

    sum = 0;
    j = 9;
    printf("%d\n",j);

    for(i = 1 ; i<n;i++){
        k = j*10+9;

        printf("%d\n",k);

        sum = sum+k;
        j = k;

    }

    printf("Sum is : %d\n",sum+9);

    return 0;
}

*/

/* 22. Write a program in C to print the Floyd's Triangle. Go to the editor

1 
01
101 
0101 
10101     */

/*

#include <stdio.h>

int main() {
    int i,j,n,p,q;

    printf("Enter the Term");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        if(i%2==0){
            p = 1;
            q = 0;
        }
        
        else{
            p= 0;
            q = 1;
        }
        for(j=1;j<=i;j++){
            
            if(j%2==0){
                printf("%d",p);
            }
            else{
                printf("%d",q);
            }
            
        }
    printf("\n");
    }
    return 0;
}

*/

// 23. Write a program in C to display the sum of the series [ 1+x+x^2/2!+x^3/3!+....]

// 24. Write a program in C to find the sum of the series [ x - x^3 + x^5 + ......]. 

// 25. Write a program in C to display the n terms of square natural number and their sum.

/*

#include <stdio.h>

int main() {
    int a,n,sqr;
    int sum = 0;

    printf("Enter the turm");
    scanf("%d",&n);

    printf("The square of the number is:\n");
    for(a=1;a<=n;a++){
        sqr = a*a;
        printf("%dX%d=%d\n",a,a,sqr);
        sum = sum+sqr;
    }
    printf("And there sum is: %d\n",sum);

    return 0 ;
}

*/

// 26. Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.

/*

# include <stdio.h>
int main() {
    int a,b,n,sum;

    printf("Enter the turm \n");
    scanf("%d",&n);

    a = 1;
    printf("%d\n",a);
    
    sum = 0;

    for(int i = 1; i<n; i++){
        b = a*10+1;
        printf("%d\n",b);

        sum = sum+b;
        a = b;
    }
    printf("And there sum is :%d\n",sum+1);

    return 0;
}

*/

// 27. Write a c program to check whether a given number is a perfect number or not.

//28. Write a c program to find the perfect numbers within a given number of range. 

// 29. Write a C program to check whether a given number is an armstrong number or not.

// 30. Write a C program to find the Armstrong number for a given range of number.

/*

#include<stdio.h>

int main(){
    int num;
    printf("Enter the number which you want to check that is armstrong number or not: ");
    scanf("%d",&num);

    int num1 = num;

    int sum = 0;

    while(num1>0){
        sum = (sum + (num1%10)*(num1%10)*(num1%10));
        num1 = num1/10;
    }

    if(sum == num){
        printf("Given number is Armstrong number: ");
    }
    else{
        printf("Not Armestrong number: ");
    }

    return 0;
}

*/