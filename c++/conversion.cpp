#include <iostream>
#include <math.h>
using namespace std;

class Conversion {
private:
    int i, dec = 0, bin, oct, temp = 0, rev = 0, rem = 0,hex=0,temp2;

public:
    void getbinary() {
          cout << "Enter a binary number:";
        cin >> bin;
        
        for (i = 0; bin != 0; i++) {
            dec = dec + pow(2, i) * (bin % 10);
            bin = bin / 10;
        }
         cout << "Decimal: " << dec << endl;
        
      temp2=dec;
          while(dec!=0)
             {
              oct = dec % 8;
              dec = dec / 8;
               temp=temp*10+oct;
                }
 
                while(temp!=0){
                rem=temp%10;
                rev=rev*10+rem;
                temp=temp/10;
    
            }
             cout << "Octal: " << rev << endl;
             

             //Binary to Hexaecimal
             dec=temp2;
               while (dec != 0)
    {
        hex = dec%16;
        dec = dec/16;
        temp = temp*10+hex;
    }
   
            if(temp==10){
cout<<"Hexadecimal=A";}
    else if(temp==11){
cout<<"Hexadecimal=B";}
    else if(temp==12){
cout<<"Hexadecimal=C";}
    else if(temp==13){
cout<<"Hexadecimal=D";}
    else if(temp==14){
cout<<"Hexadecimal=E";}
    else if(temp==15){
cout<<"Hexadecimal=F";}
else{
cout<<"Hexadecimal="<<temp;
}
        

 }
};
int main()
{
    int ch;
    Conversion s;

    cout << "1. Binary to other Conversion" << endl;
    cout << "Enter Your Choice: ";
    cin >> ch;

    switch (ch)
    {
    case 1:
    {
        s.getbinary();

        break;
    }
    default:
        cout << "Invalid choice." << endl;
    }

    return 0;
}