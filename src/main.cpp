#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

double temp;
double weight;

void input_temperature()
{
    cout << "Enter temperature:" << " ";
    cin >> temp;
}

void input_weight()
{
    cout << "Enter weight:" << " ";
    cin >> weight;
}

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
        "(G) Gram",
        "(KG) Kilogram",
        "(MG) Miligram",
        "(OZ) Ounce",
        "(lb) Pound"
    };

    string unit;
    char convert;
    
    do
    {
    
    cout << "(T)" << " " << "Temperature" << "\n" << endl;
    cout << "(W)" << " " << "Weight" << "\n" << endl;
    
    cout << "Select unit:" << " ";
    cin >> unit;

    char unit_upper = toupper (unit);

    if (unit_upper = "T" || unit_upper = "W")
    {
        if (unit_upper = "T")
        {
            for (auto& temperature_list : temperature)
            {
                cout << temperature_list << "\n" << endl;
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
            for (auto& weight_list : weight)
            {
                cout << weight_list << "\n" << endl;
            }

            cout << "Enter Unit:" << " ";
            cin >> convert;

            char convert_upper = toupper (convert);

            if (convert_upper == 'G')
            {
                input_weight();

                cout << "Kilogram:" << " " << weight * 1000 << endl;
                cout << "Miligram:" << " " << weight * 1000000 << endl;
                cout << "Ounce:" << " " << weight * 0.03527396195 << endl;
                cout << "Pound:" << " << (weight / static_cast<double>(1000)) * 2.2046 << endl;
            }
            else if (convert_upper == 'KG')
            {
                input_weight();

                cout << "Gram:" << " " << weight / static_cast<double>(1000) << endl;
                cout << "Miligram:" << " " << weight / static_cast<double>(1000000) << endl;
                cout << "Ounce:" << " " << weight / static_cast<double>(0.03527396195) << endl;
                cout << "Pound:" << " " << (weight / static_cast<double>(1000)) * 2.2046 << endl;
            }
            else if (convert_upper == 'M')
        }
    }
    else
    {
        cout << "\n" << "Invalid input" << "\n" << endl;
    }

    }
    while (true);
}