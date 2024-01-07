#include<stdio.h> 
#include<conio.h> 
#include<string.h>
void main() 
{ 
 char str1[20],str2[20]; 
clrscr(); 
printf("\n Enter string which is to be checked:"); 
scanf("%s",str1); 
strrev(str1); 
printf("%s",str1);
getch(); 
}