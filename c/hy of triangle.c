#include<stdio.h>
int main()
{
int a,b,c,d;

printf("enter value of side one\n");
scanf("%d",&a);
printf("enter value of side two\n");
scanf("%d",&b);
c=sqrt(a*a+b*b);

printf("%d is hypotenuse of the triangle\n",c);
return 0;
}
          
