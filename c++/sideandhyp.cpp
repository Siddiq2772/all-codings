#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;




int main()
{
  float a,b,c;
int d;
cout<<"Menu\n 1. Calculate hypotenuse \n 2. Calculate Side \n Enter your Choice (in num):";
cin>> d;
if  (d==1)
{
    cout<<"enter value of first side :";
    cin>> a ;
    
    cout<<"enter value of second side :";
    cin>> b ;

    c=sqrt((a*a)+(b*b));
    cout<<c <<"  is the hypotenuse";

}

 else if (d==2)
{
    cout<<"enter value of hypotenuse side :";
    cin>> a ;
    
    cout<<"enter value of  side :";
    cin>> b ;

    c=sqrt((a*a)-(b*b));
    cout<<c <<"  is the second side";

}
else 
{cout<<"you entered a worng no.";}
    return 0;
}