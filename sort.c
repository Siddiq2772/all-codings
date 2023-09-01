#include<stdio.h>
#include<conio.h>
void main()
{
    int num[10],i,j,temp;
    printf("enter 10 numbers:");
    for(i=0;i<10;i++)
    scanf("%d",&num[i]);
    for(i=0;i<10;i++)
    {
        for(j=0;j=(9-i);j++){
        
            while(num[i]>num[i+1])
            {
            temp=num[i];
            num[i]=num[i+1];
            num[i+1]=temp; 
            }   
        }
    }
    for(i=0;i<10;i++)
printf("\n%d",num[i]);
}