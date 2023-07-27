// C program to find largest among two
// numbers using ternary operator
 
#include <stdio.h>
 

int main()
{

    int m,n;
    
       printf("enter value one \n ");
      scanf("%d",&m);
    printf("enter value two \n ");
      scanf("%d",&n);
 

    (m > n) ? printf("%d > %d",m, n)

            : printf(" %d > %d",n, m);
 

    return 0;     
}