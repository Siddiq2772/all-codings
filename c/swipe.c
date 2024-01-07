// C program to find largest among two
// numbers using ternary operator
 
#include <stdio.h>
 

int main()
{

    int m,n,temp;
    
       printf("enter value one \n ");
      scanf("%d",&m);
    printf("enter value two \n ");
      scanf("%d",&n);
 

    temp=m;
    m=n;
    n=temp;
    printf("m=%d \n n=%d",m,n);
 

    return 0;     
}