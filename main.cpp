#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    char unit;
    char convert;
    double temp;

    cout << "T" << " " << "=" << " " << "Temperature" << "\n" << endl;
    
    cout << "Select unit:" << " " << endl;
    cin >> unit;

    char unit_upper = toupper (unit);

    if (unit != 'T')
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
    
}