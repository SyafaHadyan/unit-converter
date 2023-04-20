#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{

    char unit;
    char convert;
    double temp;

    do
    {
    
    cout << "(T)" << " " << "Temperature" << "\n" << endl;
    cout << "(W)" << " " << "Weight" << "\n" << endl;
    
    cout << "Select unit:" << " ";
    cin >> unit;

    char unit_upper = toupper (unit);

    if (unit_upper == 'T' || unit_upper == 'W')
    {
        if (unit_upper == 'T')
        {
            cout << "\n" << "(C) Celcius" << "\n" << "(F) Fahrenheit" << "\n" << "(K) Kelvin" << "\n" << endl;
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
        else if (unit_upper == 'W')
        {
            cout << "\n" << "(G) Gram" << "\n" << "(KG) Kilogram" << "\n" << "(MG) Miligram" << "\n" << "(OZ) Ounce" << "\n" << "(lb) Pound" << endl;
            cout << "Select"
            cin >> convert;

            char convert_upper = toupper (convert);

            if 
        }
    }
    else
    {
        cout << "\n" << "Invalid input" << "\n" << endl;
    }

    }
    while (true);
}