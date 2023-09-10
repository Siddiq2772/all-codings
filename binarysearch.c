//complete binary search with bubble sort   
#include<stdio.h>
#include<conio.h>
int num[10];
void sort();
 void binary_search(int target);
int main()
{
    int num,i;
   
   sort();
    printf("enter number to search: ");
    scanf("%d",&num);
    binary_search(num);
   
    

return 0;
}
void sort()
{
    int i,j,temp;
    printf("enter 10 numbers:");
    for(i=0;i<10;i++)
    scanf("%d",&num[i]);
    for(i=0;i<10;i++)
    {
        for(j=0;j<(9-i);j++){
        
            while(num[j]>num[j+1])
            {
            temp=num[j];
            num[j]=num[j+1];
            num[j+1]=temp; 
            }   
        }
    }
    

}
void binary_search(int target)
{
    int i;
  int  low=0, high=9,mid;
  mid=(high+low)/2;
  if(target==num[mid])
  {
  printf("%d is found at %d location",target,mid);
 
  }
  else{
  while (num[mid]!=target)
  {
    for(i=0;i<10;i++)
    {
  if(num[i]>target)
      high=mid-1;
  else
   low=mid+1;
    mid=(high+low)/2;

  }
  
  
  }
  if(target==num[mid])
  printf("%d is found at %d location",target,mid);
  else
  printf("target not found");
}

    
}   
