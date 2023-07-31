#include<iostream> 
#include<conio.h> 
#include<string.h>
using namespace std;
int main() 
{ 
 char str1[20],str2[20];

 
cout<<"Enter string which is to be checked:";
cin>>str1;
for(int i= 0; i<20;i++)
{
    str2[i]=str1[i];
}
strrev(str1); 
if (str1==str2)
cout<<"it is palindrome";

return 0; 
}