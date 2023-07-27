#include<stdio.h>
int main()
{
float a,b,c;
int d;
printf("Menu\n 1. Calculate hypotenuse \n 2. Calculate Side \n Enter your Choice (in num):");
scanf("%d",&d);
switch (d)
{
case 1:
{
printf("enter value of side one\n");
scanf("%f",&a);
printf("enter value of side two\n");
scanf("%f",&b);
c=sqrt(a*a+b*b);

printf("%f is hypotenuse of the triangle\n",c);
break;
}
case 2:
{
printf("enter value of side hypotenuse\n");
scanf("%f",&a);
printf("enter value of side \n");
scanf("%f",&b);
c=sqrt(a*a-b*b);

printf("%f is other side of the triangle\n",c);
break;
}
}

return 0;
}
          
