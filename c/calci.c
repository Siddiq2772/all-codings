#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,ans;
    char c;
    printf("Welcome to advance calculator(v:1.4)\n");
    printf("for INSTRUCTION input i0 \n");
    
    do{
    scanf("%d",&a);
    if(a == 0){
    a=ans;
    }
    
    scanf("%c",&c);
    if(c == 'e')
    {
        break;
    }
    scanf("%d",&b);
    if(b == 0)
    {
        b=ans;
    }
    
    switch (c){
    
    case '+':
          printf("Answer = %d  (e for exit)(0 for previous ans value)\n",a+b);
          ans=a+b;
        break;
    case '-':
          printf("Answer = %d  (e for exit)(0 for previous ans value)\n",a-b);
          ans=a-b;
        break;
    case '*':
          printf("Answer = %d  (e for exit)(0 for previous ans value)\n",a*b);
          ans=a*b;
        break;
    case '/':
          printf("Answer = %d  (e for exit)(0 for previous ans value)\n",a/b);
          ans=a/b;
        break;
    case '%':
          printf("Answer = %d  (e for exit)(0 for previous ans value)\n",a%b);
          ans=a%b;
        break;
    case '^':
          printf("Answer = %f  (e for exit)(0 for previous ans value)\n",(float)pow(a,b));
          ans=(float)pow(a,b);
          break;
        
    case 's':
          printf("Answer = %f  (e for exit)(0 for previous ans value)\n",sqrt(b));
          ans=sqrt(b);
        break; 
    case 'c':
          printf("Answer = %f  (e for exit)(0 for previous ans value)\n",cbrt(b));
          ans=cbrt(b);
        break;    
    case 'i':
          printf("1.e.g. INPUT (a+b)\n2.suppotrs\n\t+\t-\t*\t/\t^\n\ts (for square root)\tc (for cube root)\n3.e for exit\t\t 0 for previous ans. value \n");
        break;
    
    default :
          printf("You entered wrong operator (e for exit)\n");        
    }
    }while(c!='e');
    printf("\nThanks for using my calculator\n");
    printf("\t\t\t Made by Arqam\n\t\t\t(modified by siddique)");
    
    return 0;
}