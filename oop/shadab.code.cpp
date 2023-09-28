#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
class Decimal_to_all
{
public:
    int NUM[10], decimal = 0, binary = 0, octal = 0, hexadecimal = 0, i;
    
    void get()
    {
    cout << "Enter a decimal number: ";
        cin >> decimal;
    }
    void Dec_to_bin()
    {
        binary = decimal; // Dec to bin
        for (i = 0; binary != 0; i++)
        {
            NUM[i] = binary % 2;
            binary = binary / 2;
        }
        cout << "Binary= ";
        for (int j = i - 1; j >= 0; j--)
        {
            cout << NUM[j];
        }
        cout << endl;
    }
    void Dec_to_oct()
    {
        octal = decimal; // decimal to octal
        for (i = 0; octal != 0; i++)
        {
            NUM[i] = octal % 8;
            octal = octal / 8;
        }
        cout << "Octal= ";
        for (int j = i - 1; j >= 0; j--)
        {
            cout << NUM[j];
        }
        cout << endl;
    }

    void Dec_to_hex()
    {

        hexadecimal = decimal; // dec to hexadecimal;
        for (i = 0; hexadecimal != 0; i++)
        {
            NUM[i] = hexadecimal % 16;
            hexadecimal = hexadecimal / 16;
        }
        cout << "Hexadecimal= ";
        for (int j = i - 1; j >= 0; j--)
        {
            if (NUM[j] == 10)
            {
                cout << "A";
            }
            else if (NUM[j] == 11)
            {
                cout << "B";
            }
            else if (NUM[j] == 12)
            {
                cout << "C";
            }
            else if (NUM[j] == 13)
            {
                cout << "D";
            }
            else if (NUM[j] == 13)
            {
                cout << "E";
            }
            else if (NUM[j] == 14)
            {
                cout << "F";
            }
            else
            {
                cout << NUM[j];
            }
        }
        cout << endl;
    }
    void Bin_to_dec()
    {
        cout << "Enter a Binary number: ";
        cin >> binary;
        for (i = 0; binary != 0; i++)
        {
            decimal = decimal + pow(2, i) * (binary % 10);
            binary = binary / 10;
        }
        cout << "Decimal= " << decimal;
        cout << endl;
    }
    void Bin_to_oct()
    {
        Dec_to_oct();
    }
    void Bin_to_hex()
    {
        Dec_to_hex();
    }
    void Oct_to_dec()
    {
        cout << "Enter a Octal number(0-8): ";
        cin >> octal;
        for (i = 0; octal != 0; i++)
        {
            decimal = decimal + pow(8, i) * (octal % 10);
            octal = octal / 10;
        }
        cout << "Decimal= " << decimal;
        cout << endl;
    }
    void Oct_to_bin()
    {
        Dec_to_bin();
    }
    void Oct_to_hex()
    {
        Dec_to_hex();
    }
};

    
};


int main()
{
    Decimal_to_all obj1;
    
    int ch;

    cout << "*Number Conversion*" << endl;
    do
    {
        cout << "1.Decimal to all conversion\n2.Binary to all conversion\n3.Octal to all conversion\n4.Exit" << endl;
        cout << "Enter your choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            obj1.get();
            obj1.Dec_to_bin();
            obj1.Dec_to_oct();
            obj1.Dec_to_hex();
            cout << endl;
            break;
        case 2:

            obj1.Bin_to_dec();
            obj1.Bin_to_oct();
            obj1.Bin_to_hex();
            cout << endl;
            break;
        case 3:

            obj1.Oct_to_dec();
            obj1.Oct_to_bin();
            obj1.Oct_to_hex();
            cout << endl;
            break;
        case 4:

            cout << "*Program Terminated*";
            break;
        default:
            cout << "Invalid Choice!" << endl;
        }
    } while (ch != 3);
    getch();
}