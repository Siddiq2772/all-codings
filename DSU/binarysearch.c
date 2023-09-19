//complete binary search with bubble sort   
#include<stdio.h>
#include<conio.h>

int n,num[50];
void sort();
 void binary_search(int target);
int main()
{
    int tar,i,j,temp;
    printf("enter numbers of elements to be entered:");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++)
    scanf("%d",&num[i]);
   sort();
    printf("enter number to search:");
    scanf("%d",&tar);
    binary_search(tar);
   
    

return 0;
}
void sort()
{
    int i,j,temp;
   
    for(i=0;i<n;i++)
    {
        for(j=0;j<((n-1)-i);j++){
        
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
  int  low=0, high=n-1,mid;
  mid=(high+low)/2;
  if(target==num[mid])
  {
  printf("%d is found at %d location",target,mid);
 
  }
  else{
  while (num[mid]!=target)
  {
    for(i=0;i<n;i++)
    {
  if(num[i]>target)
      high=mid-1;
  else
   low=mid+1;
    mid=(high+low)/2;

  }
  
  
  }
  if(target==num[mid])
  printf("%d is  %d element in sorted array",target,mid+1);
  else
  printf("target not found");
}

    
}   
