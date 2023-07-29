/* 31. Write a program in C to display the pattern like a diamond.

    *
   *** 
  *****
 *******
********* 
 *******
  *****
   ***
    *
    
*/

#include <stdio.h>

int main() {
    int i,j,n,spc,k;
    
    printf("Enter the term");
    scanf("%d",&n);

    for(i=1;i<=n;i++){

        for(spc=n-i;spc>0;spc--){
            printf(" ");
        }

        for(j=1;j<=i;j++) {
            printf("*");
        }
        printf("\n");

    }

    return 0;
}