#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int i,j,a,b;
    cout<<"enter number:";
    cin>>a;
    cout<<"enter power";
    cin>>b;
    j=a;
    for (i=1;i<b;i++)

{
    a=j*a;
    }
    cout<<j<<"^"<<b<<"="<<a;
   return 0 ;
}
