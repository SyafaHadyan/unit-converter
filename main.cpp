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
        if (unit == 'T')
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
    }
    else
    {
        cout << "Invalid input" << endl;
    }

    }
    
}