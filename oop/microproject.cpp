//console-based calculator
#include<iostream>
#include<conio.h>
#include<cmath>
#include<stdio.h>
using namespace std;
int c1;
void calci ();
void bmi ();
void hypo ();
void ang ();
void fact ();
class formule
{
public:
  int q[50], temp, rev, rem, i, j;
  void dectoall (int b, int num)
  {
    i = 0;
    while (num != 0)
      {
	q[i] = num % b;
	num = num / b;
	i = i + 1;
      }
    for (int j = i - 1; j >= 0; j--)
      {
	if (q[j] >= 10 && c1 == 4)
	  {
	    cout << (char) ('A' + q[j] - 10);
	  }
	else
	  {
	    cout << q[j];
	  }

      }
    cout << endl;
  }
  void alltodec (int dec, int base)
  {
    rev = 0;
    rem = 0;
    temp = 0;
    while (dec != 0)
      {
	for (i = 0; dec > 0; i++)
	  {
	    temp = temp + pow (base, i) * (dec % 10);
	    dec = dec / 10;
	  }
      }
  }
  void dec ()
  {
    int num;
    cout << "enter number" << endl;
    cin >> num;
    cout << "binary= ";
    dectoall (2, num);
    cout << "octal= ";
    dectoall (8, num);
    cout << "hexadecimal= ";
    c1 = 4;
    dectoall (16, num);
  }
  void bin ()
  {
    int num;
    cout << "enter number" << endl;
    cin >> num;
    alltodec (num, 2);
    cout << "decimal= " << temp << endl;
    cout << "octal= ";
    dectoall (8, temp);
    cout << "hexadecimal= ";
    c1 = 4;
    dectoall (16, temp);
  }
  void octal ()
  {
    int num;
    cout << "enter number" << endl;
    cin >> num;
    alltodec (num, 8);
    cout << "decimal= " << temp << endl;
    cout << "binary= ";
    dectoall (2, temp);
    cout << "hexadecimal= ";
    c1 = 4;
    dectoall (16, temp);
  }
  void hexa ()
  {
    int num;
    cout << "enter number" << endl;
    scanf ("%x", &temp);
    cout << "decimal=" << temp << endl;
    cout << "binary= ";
    dectoall (2, temp);
    cout << "octal= ";
    dectoall (8, temp);
  }
};

int
main ()
{
  formule a;
  int num = 0, m;
  do
    {
      cout <<
	"\nmodes\n\t1.calculator    \t2.number contvertor\n\t3. BMI calculator\t4. pythagoras theorem\n\t5. ANGSTROM number\t6. factorial of number\n\t0. EXIT\n\nEnter your choice: ";
      cin >> m;
      if (m == 2)
	{
	  char h;
	  do
	    {
	      cout <<
		"1.Decimal to all conversion\n2.Binary to all conversion\n3.Octal to all conversion\n4.Hexadecimal to all\n5.Exit"
		<< endl;
	      cout << "Enter your choice: ";
	      cin >> c1;
	      switch (c1)
		{
		case 1:
		  a.dec ();
		  break;
		case 2:
		  a.bin ();
		  break;
		case 3:
		  a.octal ();
		  break;
		case 4:
		  a.hexa ();
		  break;
		case 5:
		  cout << "Program Terminated" << endl;
		  break;
		default:
		  cout << "Invalid Choice!" << endl;
		}
	    }
	  while (c1 != 5);
	}
      else if (m == 1)
	{
	  calci ();
	}
      else if (m == 3)
	bmi ();
      else if (m == 0)
	cout << "program terminated!!";
      else if (m == 4)
	hypo ();
      else if (m == 5)
	ang ();
      else if (m == 6)
	fact ();
      else
	cout << "invalid choise!!";
    }
  while (m != 0);
  return 0;

}

void
calci ()
{
  int a, b, ans;
  char c;
  printf ("Welcome to advance calculator(v:1.4)\n");
  printf ("for INSTRUCTION input i0 \n");

  do
    {
      scanf ("%d", &a);
      if (a == 0)
	{
	  a = ans;
	}

      scanf ("%c", &c);
      if (c == 'e')
	{
	  break;
	}
      scanf ("%d", &b);
      if (b == 0)
	{
	  b = ans;
	}

      switch (c)
	{

	case '+':
	  printf ("Answer = %d  (e for exit)(0 for previous ans value)\n",
		  a + b);
	  ans = a + b;
	  break;
	case '-':
	  printf ("Answer = %d  (e for exit)(0 for previous ans value)\n",
		  a - b);
	  ans = a - b;
	  break;
	case '*':
	  printf ("Answer = %d  (e for exit)(0 for previous ans value)\n",
		  a * b);
	  ans = a * b;
	  break;
	case '/':
	  printf ("Answer = %d  (e for exit)(0 for previous ans value)\n",
		  a / b);
	  ans = a / b;
	  break;
	case '%':
	  printf ("Answer = %d  (e for exit)(0 for previous ans value)\n",
		  a % b);
	  ans = a % b;
	  break;
	case '^':
	  printf ("Answer = %f  (e for exit)(0 for previous ans value)\n",
		  (float) pow (a, b));
	  ans = (float) pow (a, b);
	  break;

	case 's':
	  printf ("Answer = %f  (e for exit)(0 for previous ans value)\n",
		  sqrt (b));
	  ans = sqrt (b);
	  break;
	case 'c':
	  printf ("Answer = %f  (e for exit)(0 for previous ans value)\n",
		  cbrt (b));
	  ans = cbrt (b);
	  break;
	case 'i':
	  printf
	    ("1.e.g. INPUT (a+b)\n\n\n2.suppotrs\n\t+\t-\t*\t/\t^\ts (for square root)\tc (for cube root)\n\n\n3.e for exit\t\t 0 for previous ans. value \n");
	  break;

	default:
	  printf ("You entered wrong operator (e for exit)\n");
	}
    }
  while (c != 'e');
  printf ("\nThanks for using my calculator\n");
  printf ("\n\t\t\t(made by siddique)");

}

void
bmi ()
{

  int age, weight;
  double height, bmi;

  cout << "Enter your age (in years): ";
  cin >> age;
  if (age < 0)
    {
      cout << "Invalid age. Please enter a valid age." << endl;
      return;
    }

  cout << "Enter your weight (in kilograms): ";
  cin >> weight;
  if (weight < 0)
    {
      cout << "Invalid weight. Please enter a valid weight." << endl;
      return;
    }

  cout << "Enter your height (in meters): ";
  cin >> height;
  if (height < 0)
    {
      cout << "Invalid height. Please enter a valid height." << endl;
      return;
    }

  bmi = weight / (height * height);

  cout << "\nYour BMI is: " << bmi << endl;

  if (bmi < 18.5)
    {
      cout << "You are underweight." << endl;
    }
  else if (bmi < 24.9)
    {
      cout << "You have a normal weight." << endl;
    }
  else if (bmi < 29.9)
    {
      cout << "You are overweight." << endl;
    }
  else
    {
      cout << "You are obese." << endl;
    }

  // Age in different units
  int days = age * 365;
  int weeks = age * 52;
  int months = age * 12;

  cout << "\nYour age in different units:" << endl;
  cout << "Age in days: " << days << " days" << endl;
  cout << "Age in weeks: " << weeks << " weeks" << endl;
  cout << "Age in months: " << months << " months" << endl;


}

void
hypo ()
{
  float a, b, c;
  int d;
  printf
    ("Menu\n 1. Calculate hypotenuse \n 2. Calculate Side \n Enter your Choice (in num):");
  scanf ("%d", &d);
  switch (d)
    {
    case 1:
      {
	printf ("enter value of side one\n");
	scanf ("%f", &a);
	printf ("enter value of side two\n");
	scanf ("%f", &b);
	c = sqrt (a * a + b * b);

	printf ("%f is hypotenuse of the triangle\n", c);
	break;
      }
    case 2:
      {
	printf ("enter value of side hypotenuse\n");
	scanf ("%f", &a);
	printf ("enter value of side \n");
	scanf ("%f", &b);
	c = sqrt (a * a - b * b);

	printf ("%f is other side of the triangle\n", c);
	break;
      }
    }
}

void
ang ()
{
  int x, i, temp, rem, ang = 0;
  printf
    ("what is a angstrom of a number.\n\tangstrom (C), unit of length, equal to 10b10 metre, or 0.1 nanometre.\n It is used chiefly in measuring wavelengths of light.");
  printf ("\n\nenter three-digits integer:\t");
  scanf ("%d", &x);
  temp = x;
  for (i = 0; i <= 2; i++)
    {
      rem = x % 10;

      ang = ang + (rem * rem * rem);
      x = x / 10;

    }
  if (ang == temp)
    printf ("it is angstrom number\n");
  else
    printf ("it is not a angstrom number\n");
}

void
fact ()
{
  int fact = 1, i, num;
  cout << "\nenter number:\t";
  cin >> num;
  for (i = num; i > 0; i--)
    fact = fact * i;
  cout << "\nfactorial of " << num << " is " << fact;
}