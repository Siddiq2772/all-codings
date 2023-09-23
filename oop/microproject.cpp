#include<iostream.h>
#include<conio.h>
#include<math.h>

int q[10],temp,i;
class formule
{ public:
 int rev,rem;

void dectoall(int b, int num)
{
i=0;
rev=0;
rem=0;
while(num!=0)
  {
    q[i]=num % b;
    num=num / b;
    i++;
  }
  
cout<<endl;

}
int alltodec(int dec, int base)
    {
i=0;
rev=0;
rem=0;
	while(dec!=0)
	{
	     for (i = 0; dec != 0; i++) {
	    temp = temp + pow(base, i) * (dec % 10);
	    dec = dec / 10;
	    }
        }
        
        
    }
};

void main()
{   formule a;
    int c1,c2,num;
    clrscr();
    cout<<"enter type of number to be entered"<<endl;
    cout<<"menu:\n\t1.decimal\n\t2.binary\n\t3.octal\n\t4.hexadecimal"<<endl;
    cin>>c1;
    cout<<"enter type of number to be converted"<<endl;
    cout<<"menu:\n\t1.decimal\n\t2.binary\n\t3.octal\n\t4.hexadecimal"<<endl;
    cin>>c2;
    cout<<"enter  number: ";
    cin>>num;
    switch(c1)
    {
    case 1 :
          switch(c2)
          {
        case 2 :
            
            a.dectoall(2,num);
            for(int j=i-1;j>=0;j--)
            cout<<q[j];
            break;
         case 3 :
            
            a.dectoall(8,num);
            for(int j=i-1;j>=0;j--)
            cout<<q[j];
            break;
        case 4 :
           
            a.dectoall(16,num);
            for(int j=i-1;j>=0;j--)
            cout<<q[j];
            break;
        default :
            cout<<"invalid second choise ";
            break;
            }
        break;
        
    case 2 :
        switch(c2)
          {
        case 1 :
            a.alltodec(num, 2);
             cout << "Decimal: " << temp<< endl;
            break;
         case 3 :
            a.alltodec(num, 2);
            a.dectoall(8,temp);
             for(int j=i-1;j>=0;j--)
              cout<<q[j];
            break;
        case 4 :
            a.alltodec(num, 2);
            a.dectoall(16,temp);
             for(int j=i-1;j>=0;j--)
              cout<<q[j];
            break;
        default :
            cout<<"invalid second choise ";
            break;
            }
            break;
    case 3 :
        switch(c2)
          {
        case 1 :
            a.alltodec(num, 8);
        cout << "Decimal: " << temp<< endl;
            break;
         case 2 :
            a.alltodec(num, 8);
            a.dectoall(2,temp);
            for(int j=i-1;j>=0;j--)
            cout<<q[j];
            break;
        case 4 :
            a.alltodec(num, 8);
            a.dectoall(16,temp);
            for(int j=i-1;j>=0;j--)
            cout<<q[j];
            break;
        default :
            cout<<"invalid second choise ";
            break;
            }
        break;
    case 4 :
        switch(c2)
          {
        case 1 :
            a.alltodec(num, 16);
        cout << "Decimal: " << temp<< endl;
            break;
         case 2 :
          a.alltodec(num, 16);
          a.dectoall(2,temp);
            for(int j=i-1;j>=0;j--)
            cout<<q[j];
            
            break;
        case 3 :
        a.alltodec(num, 16);
          a.dectoall(8,temp);
            for(int j=i-1;j>=0;j--)
            cout<<q[j];
            
            break;
        default :
            cout<<"invalid second choise ";
            break;
            }
        

        break;

    default:
       cout<<"invalid first choise";
       break;



    }
    
    



    getch();
}