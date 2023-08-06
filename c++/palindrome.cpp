//Program to check whether a string is palindrom or not
#include<iostream> 
#include<string.h>
using namespace std;
int main() 
{ 
 char str1[20],str2[20];
int index=0, i = 0;

cout<<"Enter string :";
cin>>str1;
while(str1[index] != '\0'){
 index++;
}
while(index > 0) {
index--;
str2[i] = str1[index];
i++;
}
str2[i] = '\0';
if (strcmp(str1, str2) == 0) {
printf("String is palindrom");
} else {
printf("String is not palindrom");
}
return 0; 
}