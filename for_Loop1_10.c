// (1) Write a program in C to display the first 'n' natural numbers

/*

#include <stdio.h>

 int main() {

   int i,n;

   printf("Enter the valu of n:");
   scanf("%d",&n);

   printf("The n natural no:\n");
   for(i=1;i<=n;i++){
      printf("%d\n",i);
   }

    return 0;
 }

 */

// 2. Write a C program to find the sum of first 'n' natural numbers.

/*

#include <stdio.h>

int main() {
   int i,n,sum;
   sum = 0;

   printf("Enter the number");
   scanf("%d",&n);

   for(i=1;i<=n;i++){
      sum = sum+i;

   }
   printf("%d\n",sum);
   

   return 0;
}

*/

// (3.) Write a program in C to display n terms of natural number and their sum.

/*

#include <stdio.h>

int main(){
   int i,n,sum;
   sum = 0;

   printf("Enter the number");
   scanf("%d",&n);

   printf("The n natural no is:");
   for(i=1;i<=n;i++){
      printf("%d\n",i);
      sum = sum+i;

   }
   printf("And the sum is:\n");
   printf("%d\n",sum);

   return 0;
}

*/

//(4)Write a program in C to read n n0. from keyboard and find their sum and average.

/*

#include <stdio.h>

int main() {
   int i,n ;
   float sum , avg;
   sum = 0;

   printf("Enter the number");
   scanf("%d",&n);

   for(i=1;i<=n;i++){
      sum = sum+i;
      

   }
   printf("The sum of given no is:\n");
   printf("%f\n",sum);

   avg = sum/n;
   printf("And the average is %f\n",avg);

   return 0;

}

*/

// 5. Write a program in C to display the cube of the number upto given an integer. 

/*

#include <stdio.h>

int main() {
   int i,n,cube,j;
   j = 1;
   printf("Enter the no");
   scanf("%d",&n);

   for(i=1;i<=n;i++){
      cube = i*i*i;
      printf("The cube of %d = %d\n",j,cube);
      j++;

   }
   return 0;
}

*/

//6. Write a program in C to display the multiplication table of a given integer.

/*

#include <stdio.h>

int main(){
   int n,i,j;

   printf("Enter the value of n which you want to print table");
   scanf("%d",&n);

   for(i=1;i<=10;i++){
      j = i*n;
      printf("%d\n",j);
   }

   return 0;
}

*/

//7. Write a program in C to display the multiplication table vertically from 1 to n.

/*

#include <stdio.h>

int main(){
   int i,j,n;
   printf("Enter the number whose want to table\n");
   scanf("%d",&n);

   for(i=1;i<=n;i++){
      j = i*n;
      printf("%dX%d = %d\n",n,i,j);

   }
   return 0;
}
*/

// 8. Write a program in C to display the n terms of odd natural number and their sum .

/*
#include <stdio.h>

int main(){
   int i,j,n;

   printf("Enter the number");
   scanf("%d",&n);

   for(i=1;i<=n;i+=2){
      printf("%d\n",i);
   }
   return 0;
}
*/

/* 9. Write a program in C to display the pattern like right angle triangle using an asterisk
*
**
***
****

*/

/*

#include <stdio.h>

int main() {
   int i,j,n;
   printf("Enter the rows");
   scanf("%d",&n);
   
   for(i=1;i<=n;i++){
      for(j=1;j<=i;j++){
         printf("*");
      }
   printf("\n");
   }

   return 0;
}

*/

/* 10. Write a program in C to display the pattern like right angle triangle with a number.

1
12
123
1234   */


#include <stdio.h>

int main() {
   int i,j,n;
   printf("Enter the nuber");
   scanf("%d",&n);

   for(i=1;i<=n;i++){
      for(j=1;j<=i;j++){
      printf("%d",j);
   }
   printf("\n");
   }

   return 0;
} 



