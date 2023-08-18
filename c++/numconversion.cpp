#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
class conversion
{
    public :
    int i=0,temp=0,rev=0,rem=0;
    int formula_1(int dec, int base)
    {
        while(dec!=0)
             for (i = 0; dec != 0; i++) {
            temp = temp + pow(base, i) * (dec % 10);
            dec = dec / 10;
        }
         cout << "Decimal: " << temp<< endl;
    }

};

int main()
{    conversion b;
    int dec,base,a;
    cout<<"enter  number";
    cin>>dec;
    cout<<"1.binary\n2.octal\n3.hexadecimal"<<endl;
    cout<<"entered num is ";
    cin>>a;
    switch(a)
    {
        case 1 :
        base = 2;
        b.formula_1(dec,base);
        break;
         case 2 :
        base = 8;
        b.formula_1(dec,base);
        break;
         case 3 :
        base = 16;
        b.formula_1(dec,base);
        break;
        default :
        cout<<"invalid choise";
        break;
    }
    getch();
}
