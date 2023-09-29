//microproject vscode version
#include<iostream>
#include<cmath>
using namespace std;
class formule
{ public:
 int q[50],temp,rev,rem,i,j;
int dectoall(int b, int num)
{i=0;
while(num!=0)
  {q[i]=num % b;
    num=num / b;
    i=i+1;}
  for(j=i-1;j>=0;j--)
  {
  cout<<q[j];
  }
}
int alltodec(int dec, int base)
    {rev=0;
     rem=0;
     temp=0;
     while(dec!=0)
	{for (i = 0; dec > 0; i++) {
	    temp = temp + pow(base, i) * (dec % 10);
	    dec = dec / 10;
	    }
	     }
	      }
};
int main()
{   formule a;
    int c1,c2,num;
    
     do{
    cout<<"\nenter type of number to be entered"<<endl;
    cout<<"menu:\n\t1.decimal\n\t2.binary\n\t3.octal\n\t4.hexadecimal\n\t5.exit"<<endl;
    cin>>c1;
    if(c1!=5){
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
	 break;
	 case 3 :
	    a.dectoall(8,num);
	    break;
	case 4 :
	   a.dectoall(16,num);
	   break;
	default :
	    cout<<"invalid second choise ";
	    break;
	    }
	break;
      case 2 :

	a.alltodec(num, 2);
       switch(c2)
	  {

	case 1 :
	    cout << "answer: " << a.temp<< endl;
	   break;
	 case 3 :
	    a.dectoall(8,a.temp);
	 break;
	case 4 :
	    a.dectoall(16,a.temp);
	    break;
	default :
	    cout<<"invalid second choise ";
	    break;
	    }
	    break;
    case 3 :
	a.alltodec(num, 8);
       switch(c2)
	  {

	case 1 :
	   cout << "answer: " << a.temp<< endl;
	    break;
	 case 2 :
	    a.dectoall(2,a.temp);
	 break;
	case 4 :
	    a.dectoall(16,a.temp);
      break;
	default :
		  cout<<"invalid second choise ";
	    break;
	    }
	break;
    case 4 :
	a.alltodec(num, 16);
       switch(c2)
	  {
	case 1 :
	    cout << "answer: " << a.temp<< endl;
	    break;
	 case 2 :
	  a.dectoall(2,a.temp);
	  break;
	case 3 :
	  a.dectoall(8,a.temp);
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
       }
       }while(c1!=5);
       cout<<"\nexited";
    return 0;
}