#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{

    do {

    char cont;
    char unit;
    char convert;
    double temp;

    cout << "T" << " " << "=" << " " << "Temperature" << "\n" << endl;
    
    cout << "Select unit:" << " " << endl;
    cin >> unit;

    char unit_upper = toupper (unit);

    if (unit_upper == 'T')
    {
        if (unit_upper == 'T')
        {
            cout << "Enter C or F or or K:" << " " << endl;
            cin >> convert;

            if (convert == 'C')
            {
                cout << "Enter temperature:" << " " << endl;
                cin >> temp;

                cout << "F:" << " " << ((temp * 9)/5) + 32 << endl;
                cout << "K:" << " " << temp + 273.15 << endl;
            }
            else if (convert == 'F')
            {
                cout << "Enter temperature:" << " " << endl;
                cin >> temp;

            	cout << "C:" << " " << ((temp - 32)*5)/9 << endl;
                cout << "K:" << " " << temp + 459.67 << endl;
            }
            else if (convert == 'K')
            {
                cout << "Enter temperature:" << " " << endl;
                cin >> temp;

                cout << "C:" << " " << (temp - 273.15) << endl;
                cout << "F:" << " " << ((temp - 273.15)*9)/5 + 32 << endl;
            }

        }
    }
    else
    {
        cout << "Invalid input" << endl;
    }

    cout << "Continue (Y/N)?" << " " << endl;
    cin >> cont;

    char cont_upper = cont;
    char cont_upper = toupper (cont_upper);
} while (cont_upper == 'Y');
}