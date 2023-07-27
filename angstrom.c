#include<stdio.h>


int main()
{
    int a,i,temp,rem,ang=0;
    
    printf("enter three-digits integer");
    scanf("%d",&a);
    temp=a;
    for (i=0;i<=2;i++)
    {
       rem=a%10;

       ang=ang+(rem*rem*rem);
       a=a/10; 
       
    }
    if(ang==temp)
    printf("it is angstrom number");
    else
    printf("it is not a angstrom number");
    
    
    return 0;
}
