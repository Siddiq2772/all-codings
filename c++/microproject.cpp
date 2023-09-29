#include<iostream>
#include<conio.h>
#include<math.h>

class conversion
{
   int octal,hexadecimal,binary,decimal;
   int NUM[10];
   int num=0,dec_sum=0,rem=0;
  public:
  void binarytoall()
  {
    binary=0;
      cout<<"Enter Binary number: ";   
    cin>>binary;
    decimal=binary;      //binary to decimal//
    for(int i=0;decimal!=0;i++)
    {
      dec_sum= dec_sum + pow(2,i)*(decimal%10);
      decimal /= 10;
    }
cout<<"Binary To Decimal="<<dec_sum<<endl;
  
 octal=dec_sum;    //binary to octal// 
 num=0;
while(octal!=0)
  {
    NUM[num]=octal % 8;
    octal /= 8;
    num++;
  }
  cout<<" Binary to Octal= ";
  for(int j=num-1;j>=0;j--)
  cout<<NUM[j];
  cout<<endl;

 hexadecimal=dec_sum;       //Binary to hexadecilma//
  num=0;
while(hexadecimal!=0)
  {
    NUM[num]=hexadecimal % 16;
    hexadecimal /= 16;
    num++;
  }
  cout<<" Binary to Hexadecimal= ";
  for(int j=num-1;j>=0;j--)
 if(NUM[j]<10)
  cout<<NUM[j];
  else
{
   if(NUM[j]==10)
cout<<"A";
    else if(NUM[j]==11)
cout<<"B";
    else if(NUM[j]==12)
cout<<"C";
    else if(NUM[j]==13)
cout<<"D";
    else if(NUM[j]==14)
cout<<"E";
    else if(NUM[j]==15)
cout<<"F";
}  
cout<<endl;

  }
  void dectoall()
  {
     cout<<"Enter a Decimal number:"; 
    cin>>decimal;

    binary=decimal;
      while(binary!=0)
  {
    NUM[num]=binary % 2;
    binary /= 2;
    num++;
  }
  cout<<" Decimal to Binary= ";
  for(int j=num-1;j>=0;j--)
  cout<<NUM[j];
  cout<<endl;
          
  octal=decimal;   //decimal to octal//
  num=0;
  while(octal!=0)
  {
    NUM[num]=octal % 8;
    octal /= 8;
    num++;
  }
  cout<<" Decimal to Octal= ";
  for(int j=num-1;j>=0;j--)
  cout<<NUM[j];
  cout<<endl;


  hexadecimal=decimal;     //decimal to hexadeciml//
  num=0;
   while(hexadecimal!=0)
  {
    NUM[num]=hexadecimal % 16;
    hexadecimal /= 16;
    num++;
  }
   cout<<" Decimal To Hexadecimal= ";
  for(int j=num-1;j>=0;j--)
  if(NUM[j]<10)
  cout<<NUM[j];
  else
{
   if(NUM[j]==10)
cout<<"A";
    else if(NUM[j]==11)
cout<<"B";
    else if(NUM[j]==12)
cout<<"C";
    else if(NUM[j]==13)
cout<<"D";
    else if(NUM[j]==14)
cout<<"E";
    else if(NUM[j]==15)
cout<<"F";
}  
cout<<endl;
  }
void octaltoall()
{
octal=0;
dec_sum=0;
      cout<<"Enter Octal number:";
      cin>>octal;
 decimal=octal;      //octal to decimal//
    for(int i=0;decimal!=0;i++)
    {
      dec_sum= dec_sum + pow(8,i)*(decimal%10);
      decimal /= 10;
    }
    cout<<"Octal To Decimal="<<dec_sum<<endl;
    
     binary=dec_sum;    //octal to decimal//
      while(binary!=0)
  {
    NUM[num]=binary % 2;
    binary /= 2;
    num++;
  }
  cout<<"Octal to Binary= ";
  for(int j=num-1;j>=0;j--)
  cout<<NUM[j];
  cout<<endl;

   hexadecimal=dec_sum;     //octal to hexadeciml//
  num=0;
   while(hexadecimal!=0)
  {
    NUM[num]=hexadecimal % 16;
    hexadecimal /= 16;
    num++;
  }
   cout<<"Octal To Hexadecimal= ";
  for(int j=num-1;j>=0;j--)
  if(NUM[j]<10)
  cout<<NUM[j];
  else
{
   if(NUM[j]==10)
cout<<"A";
    else if(NUM[j]==11)
cout<<"B";
    else if(NUM[j]==12)
cout<<"C";
    else if(NUM[j]==13)
cout<<"D";
    else if(NUM[j]==14)
cout<<"E";
    else if(NUM[j]==15)
cout<<"F";
}  
cout<<endl;
}

};
int main()
{   
   int a;
   conversion obj;
  
    cout<<"1. Decimal To other numbers"<<endl;
    cout<<"2. Binary To other numbers"<<endl;
    cout<<"3. Octal To other numbers"<<endl;
    cout<<"4. exit"<<endl;
    do{
    cout<<"Enter your choice:";
    cin>>a;
    
switch(a)
{

case 1:
 obj.dectoall();
break;

case 2:
    obj.binarytoall();
  
  break;


case 3:
   obj.octaltoall();
break;
case 4 :
cout<<"program ended";
break;


default :
cout<<"Wrong choice";
break;
}
  }while(a!=4);
getch ();
}