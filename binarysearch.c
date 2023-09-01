#include<stdio.h>
#include<conio.h>
void sort();
void main()
{
    int num,i;
   sort();
    printf("%d",&num)
    


}
void sort()
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
    

}
void binary_search(int num[10])
{
    int i;
  int  low=0, high=9,mid;
  mid=(high+low)/2;
  while (num[mid]==num)
  {
  
  if()


    
    
}