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
    
    do
    {

    cout << "Select unit:" << " ";
    cin >> unit;

    char unit_upper = toupper (unit);

    if (unit_upper == 'T')
    {
        if (unit_upper == 'T')
        {
            cout << "Enter C or F or or K:" << " ";
            cin >> convert;

            char convert_upper = toupper (convert);

            if (convert_upper == 'C')
            {
                cout << "Enter temperature:" << " ";
                cin >> temp;

                cout << "F:" << " " << ((temp * 9)/5) + 32;
                cout << "K:" << " " << temp + 273.15;
            }
            else if (convert_upper == 'F')
            {
                cout << "Enter temperature:" << " ";
                cin >> temp;

            	cout << "C:" << " " << ((temp - 32)*5)/9;
                cout << "K:" << " " << temp + 459.67 ;
            }
            else if (convert_upper == 'K')
            {
                cout << "Enter temperature:" << " ";
                cin >> temp;

                cout << "C:" << " " << (temp - 273.15);
                cout << "F:" << " " << ((temp - 273.15)*9)/5 + 32;
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