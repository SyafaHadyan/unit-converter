#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    vector<string> temperature =
    {
    "(C) Celcius",
    "(F) Fahrenheit",
    "(K) Kelvin"
    };

    vector<string> weight =
    {
    "(G) Gram"
    "(KG) Kilogram"
    "(MG) Miligram"
    "(OZ) Ounce"
    "(lb) Pound"
    };

    char unit;
    char convert;
    double _temp_;
    double _weight_;

    void input_temperature()
    {
        cout << "Enter temperature:" << " ";
        cin >> _temp_;
    }

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
            for (auto& temperature_ : temperature)
            {
                cout << temperature_ << "\n" << endl;
            }
            cout << "Enter Unit:" << " ";
            cin >> convert;

            char convert_upper = toupper (convert);

            if (convert_upper == 'C')
            {
                input_temperature();

                cout << "Fahrenheit:" << " " << ((temp * 9)/5) + 32 << endl;
                cout << "Kelvin:" << " " << temp + 273.15 << endl;
            }
            else if (convert_upper == 'F')
            {
                input_temperature();

            	cout << "Celcius:" << " " << ((temp - 32)*5)/9 << endl;
                cout << "Kelvin:" << " " << temp + 459.67 << endl;
            }
            else if (convert_upper == 'K')
            {
                input_temperature();

                cout << "Celcius:" << " " << (temp - 273.15) << endl;
                cout << "Fahrenheit:" << " " << ((temp - 273.15)*9)/5 + 32 << endl;
            }
        }
        else if (unit_upper == 'W')
        {
            for (auto& weight_ : weight)
            {
                cout << weight_ << "\n" << endl;
            }

            cout << "Enter Unit:" << " ";
            cin >> convert;

            char convert_upper = toupper (convert);

            if (convert_upper == 'G')
            {
                cout << "Enter weight:" << " ";
                cin >> _weight_;

                cout << "Kilogram:" << " " << weight * 1000 << endl;
                cout << "Miligram:" << " " << weight * 1000000 << endl;
                cout << "Ounce:" << " " << weight * 4.6566127837927 << endl;
                cout << "Pound:" << " " << ((weight * 2.2046) / 1000) << endl;
            }
            else if (convert_upper == 'KG')
            {
                cout enter wei
            }
        }
    }
    else
    {
        cout << "\n" << "Invalid input" << "\n" << endl;
    }

    }
    while (true);
}