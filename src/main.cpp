#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{

    char unit;
    char convert;
    double temp;

    cout << "(T)" << " " << "Temperature" << "\n" << endl;
    
    do
    {

    cout << "Select unit:" << " ";
    cin >> unit;

    char unit_upper = toupper (unit);

    if (unit_upper == 'T')
    {
        if (unit_upper == 'T')
        {
            cout << "(C) Celcius" << "\n" << "(F) Fahrenheit" << "\n" << "(K) Kelvin" << "\n" << endl;
            cout << "Enter C or F or or K:" << " ";
            cin >> convert;

            char convert_upper = toupper (convert);

            if (convert_upper == 'C')
            {
                cout << "Enter temperature:" << " ";
                cin >> temp;

                cout << "Fahrenheit:" << " " << ((temp * 9)/5) + 32 << endl;
                cout << "Kelvin:" << " " << temp + 273.15 << endl;
            }
            else if (convert_upper == 'F')
            {
                cout << "Enter temperature:" << " ";
                cin >> temp;

            	cout << "Celcius:" << " " << ((temp - 32)*5)/9 << endl;
                cout << "Kelvin:" << " " << temp + 459.67 << endl;
            }
            else if (convert_upper == 'K')
            {
                cout << "Enter temperature:" << " ";
                cin >> temp;

                cout << "Celcius:" << " " << (temp - 273.15) << endl;
                cout << "Fahrenheit:" << " " << ((temp - 273.15)*9)/5 + 32 << endl;
            }

        }
    }
    else
    {
        cout << "Invalid input" << endl;
    }

    }
    while (true);
}