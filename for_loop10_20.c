/* 11. Write a program in C to make such a pattern like right angle triangle with a number which will repeat a number in a row.

 1
 22
 333
 4444  */

/*

 #include <stdio.h>

 int main() {
    int i,j,n;
    printf("Enter the number");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d",i);
        }
    printf("\n");
    }
    return 0;
 }

 */

/* 12. Write a program in C to make such a pattern like right angle triangle with number increased by 1.

   1
   2 3
   4 5 6
   7 8 9 10    */
/*
   #include <stdio.h>

   int main(){
    int i,j,n,count;
    printf("Enter the number");
    scanf("%d",&n);
    count =1;

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++) {
            printf("%d",count);
            count++;
        }
        printf("\n");
    }
   }    */

/* 13. Write a program in C to make such a pattern like a pyramid with numbers increased by 1.

   1 
  2 3 
 4 5 6 
7 8 9 10 
               */

/* 14. Write a program in C to make such a pattern like a pyramid with an asterisk.

   * 
  * * 
 * * * 
* * * *

*/


//15. Write a C program to calculate the factorial of a given number.

/*

#include <stdio.h>

int main() {
    int i,fact,n;
    fact =1;
    printf("Enter the num. which you want to find fac.");
    scanf("%d",&n);

    for(i=n;i>0;i--){
        fact= fact*i;
        
    }
    printf("%d\n",fact);
    return 0;
}
  */

// 16. Write a program in C to display the n terms of even natural number and their sum.
/*

#include <stdio.h>

int main() {
    int i ,n,sum;
    sum = 0;
    printf("Enter number of term");
    scanf("%d",&n);
    printf("The n term of natural no is:\n");

    for(i=2;i<=n;i +=2){
        printf("%d\n",i);
        sum = sum+i;
    }

    printf("And there sum is:%d\n",sum);

    return 0;
}  

*/

/* 17. Write a program in C to make such a pattern like a pyramid with a number which will repeat the number in the same row.

   1
  2 2
 3 3 3
4 4 4 4   */

// 18. Write a program in C to find the sum of the series [ 1-X^2/2!+X^4/4!- .........].

// 19. Write a program in C to display the n terms of harmonic series and their sum.

// 20. Write a program in C to display the pattern like a pyramid using asterisk and each row contain an odd number of asterisks.






