#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"enter the numbers";
    cin>>a;
     cin>>b;
   

    temp=b; 
    b=a;
    a=temp;
    cout<<"value of a="<<a<<endl;
    cout<<"value of b="<<b;
    return 0;
}