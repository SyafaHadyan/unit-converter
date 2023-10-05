#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

double temp;
double weight;
double length;
char unit_select;
char convert;

void convert_upper()
{
    char convert_upper = toupper (convert);
}

void enter_unit_convert()
{
    cout << "Enter Unit:" << " ";
    cin >> convert;
}

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

void input_length()
{
    cout << "Enter length:" << " ";
    cin >> length;
}

int main()
{
    vector<string> temperature_units =
    {
        "(C) Celcius",
        "(F) Fahrenheit",
        "(K) Kelvin"
    };

    vector<string> weight_units =
    {
        "(G) Gram",
        "(KG) Kilogram",
        "(MG) Miligram",
        "(OZ) Ounce",
        "(lb) Pound"
    };
    
    vector<string> length_units =
    {
        "(MM) Millimeter"
        "(CM) Centimeter",
        "(M) Meter",
    }
  
    cout << "(T)" << " " << "Temperature" << "\n" << endl;
    cout << "(W)" << " " << "Weight" << "\n" << endl;
    cout << "(L)" << " " << "Length" << "\n" << endl;
    
    cout << "Select unit:" << " ";

    cin >> unit_select;

    if (unit_select = 'T' || unit_select = 'W' || unit_select = 'L')
    {
        if (unit_select = 'T')
        {
            for (auto& temperature_list : temperature_units)
            {
                cout << temperature_list << "\n" << endl;
            }
            enter_unit_convert();

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
        else if (unit_select == 'W')
        {
            for (auto& weight_list : weight_units)
            {
                cout << weight_list << "\n" << endl;
            }

            enter_unit_convert();

            char convert_upper = toupper (convert);

            if (convert_upper == 'G')
            {
                input_weight();

                cout << "Kilogram:" << " " << weight * 1000 << endl;
                cout << "Miligram:" << " " << weight * 1000000 << endl;
                cout << "Ounce:" << " " << weight * 0.03527396195 << endl;
                cout << "Pound:" << " " << (weight / (1000)) * 2.2046 << endl;
            }
            else if (convert_upper == 'KG')
            {
                input_weight();

                cout << "Gram:" << " " << weight / (1000) << endl;
                cout << "Miligram:" << " " << weight / (1000000) << endl;
                cout << "Ounce:" << " " << weight / (0.03527396195) << endl;
                cout << "Pound:" << " " << (weight / (1000)) * 2.2046 << endl;
            }
            else if (convert_upper == 'M')
            {
                input_weight();

                cout << "Gram:" << " " << weight * 1000 << endl;
                cout << "Kilogram:" << " " << weight * 1000 << endl;
            }
        }
        else if (unit_select = 'L')
        }
            for (auto& length_list : length_units)
            {
                cout << "Length: " << length_list << endl;
            }

            enter_unit_convert();

    }
    else
    {
        cout << "\n" << "Invalid input" << "\n" << endl;
    }
}