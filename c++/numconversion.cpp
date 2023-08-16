#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    int i,j,num=0,bin[10];
    cout<<"enter num";
   for(i=0;i<10;i++)
    cin>> bin[9-i];
    

for(i=0;i<10;i++)
{
    num=num+(bin[i]*pow(2,i));
}

cout<<"decimal="<<num;



   getch();
}