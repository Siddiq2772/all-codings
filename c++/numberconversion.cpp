#include<iostream>
#include<conio.h>
using namespace std;
// a program to convert decimal into octal, binary and hexadecimal.
int main()
{
    
    int a,x,i=0,q[10];
    do{
   
   cout<<"Enter a decimal number:";
    cin>>x;
    cout<<"1. Decimal To Binary"<<endl;
    cout<<"2. Decimal To Octal"<<endl;
    cout<<"3. Decimal To Hexadeciaml"<<endl;
    cout<<"4. exit"<<endl;
    cout<<"Enter your choice:";
    cin>>a;
    
switch(a)
{
case 1:
      while(x!=0)
  {
    q[i]=x % 2;
    x=x / 2;
    i++;
  }
  for(int j=i-1;j>=0;j--)
  cout<<q[j];
cout<<endl;
break;

case 2:
       while(x!=0)
  {
    q[i]=x % 8;
    x=x / 8;
    i++;
  }
  for(int j=i-1;j>=0;j--)
  cout<<q[j];
cout<<endl;
break;

case 3:
        while(x!=0)
  {
    q[i]=x % 16;
    x=x / 16;
    i++;
  }
  for(int j=i-1;j>=0;j--)
  cout<<q[j];
cout<<endl;
break;
case 4:
   {
    cout<<"extied sucessfully";
    break;
   }
    }
    }while(a!=4);
getch();
}