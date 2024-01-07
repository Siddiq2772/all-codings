#include<stdio.h>
int p(int a,int b);
void main()
{
int x,y;
printf("enter no.");
scanf("%d",&x);
printf("enter power");
scanf("%d",&y);
printf("%d^%d is %d\n",x,y,p(x,y));
}
int p(int a,int b)
{
int i,j;
j=a;
for(i=1;i<b;i++){
j=j*a;
}
return j;
}
