#include<stdio.h>
#include<conio.h>
void array();
void main()
{
    int num,i;
    array();
    
    
    getch();

}
void array()
{
    int num[10],i,j,temp;
    printf("enter 10 numbers:");
    for(i=0;i<10;i++)
    scanf("%d",&num[i]);
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++){
            while(num[i]>num[i+1])
            {temp=num[i];
            num[i]=num[i+1];
            num[i+1]=temp; }   
        }
    }
    
    for(i=0;i<10;i++)
    {
    printf("%d",num[i]);
    }

}
void binary_search(int num)
{
    int i;
    
    
}