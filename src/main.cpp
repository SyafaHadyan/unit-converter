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

char convert_upper_toupper(char c)
{
    return toupper(c);
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
        "(MG) Milligram",
        "(OZ) Ounce",
        "(lb) Pound",
        "(TON) Ton",
        "(ST) Stone"
    };

    vector<string> length_units =
    {
        "(MM) Millimeter",
        "(CM) Centimeter",
        "(M) Meter",
        "(KM) Kilometer", 
        "(IN) Inch", 
        "(FT) Foot"
    };

    do {
        cout << "(T)" << " " << "Temperature" << "\n" << endl;
        cout << "(W)" << " " << "Weight" << "\n" << endl;
        cout << "(L)" << " " << "Length" << "\n" << endl;
        
        cout << "Select unit:" << " ";
        cin >> unit_select;

        if (unit_select == 'T' || unit_select == 'W' || unit_select == 'L')
        {
            if (unit_select == 'T')
                {
                    for (auto& temperature_list : temperature_units)
                    {
                    cout << temperature_list << "\n" << endl;
                    }

                enter_unit_convert();
                convert = convert_upper_toupper(convert);

                if (convert == 'C')
                {
                    input_temperature();

                    cout << "Fahrenheit:" << " " << ((temp * 9) / 5) + 32 << endl;
                    cout << "Kelvin:" << " " << temp + 273.15 << endl;
                }
                else if (convert == 'F')
                {
                    input_temperature();

                    cout << "Celcius:" << " " << ((temp - 32) * 5) / 9 << endl;
                    cout << "Kelvin:" << " " << temp + 459.67 << endl;
                }
                else if (convert == 'K')
                {
                    input_temperature();

                    cout << "Celcius:" << " " << (temp - 273.15) << endl;
                    cout << "Fahrenheit:" << " " << ((temp - 273.15) * 9) / 5 + 32 << endl;
                }
            }
            else if (unit_select == 'W')
            {
                for (auto& weight_list : weight_units)
                {
                    cout << weight_list << "\n" << endl;
                }

                enter_unit_convert();
                convert = convert_upper_toupper(convert);

                if (convert == 'G')
                {
                    input_weight();

                    cout << "Kilogram:" << " " << weight * 1000 << endl;
                    cout << "Milligram:" << " " << weight * 1000000 << endl;
                    cout << "Ounce:" << " " << weight * 0.03527396195 << endl;
                    cout << "Pound:" << " " << (weight / 1000) * 2.2046 << endl;
                    cout << "Ton:" << " " << (weight / 1000) * 0.00110231 << endl;
                    cout << "Stone:" << " " << (weight / 1000) * 0.157473 << endl;
                }
                else if (convert == 'KG')
                {
                    input_weight();

                    cout << "Gram:" << " " << weight / 1000 << endl;
                    cout << "Milligram:" << " " << weight / 1000000 << endl;
                    cout << "Ounce:" << " " << weight / 0.03527396195 << endl;
                    cout << "Pound:" << " " << (weight / 1000) * 2.2046 << endl;
                    cout << "Ton:" << " " << (weight / 1000) * 0.00110231 << endl;
                    cout << "Stone:" << " " << (weight / 1000) * 0.157473 << endl;
                }
                else if (convert == 'TON')
                {
                    input_weight();

                    cout << "Gram:" << " " << weight / 0.000001 << endl;
                    cout << "Kilogram:" << " " << weight / 0.00110231 << endl;
                    cout << "Milligram:" << " " << weight / 0.000000001 << endl;
                    cout << "Ounce:" << " " << weight / 0.00003527396195 << endl;
                    cout << "Pound:" << " " << weight / 0.0022046 << endl;
                    cout << "Stone:" << " " << weight / 0.157473 << endl;
                }
                else if (convert == 'ST')
                {
                    input_weight();

                    cout << "Gram:" << " " << weight / 0.000001 << endl;
                    cout << "Kilogram:" << " " << weight / 0.00110231 << endl;
                    cout << "Milligram:" << " " << weight / 0.000000001 << endl;
                    cout << "Ounce:" << " " << weight / 0.00003527396195 << endl;
                    cout << "Pound:" << " " << weight / 0.0022046 << endl;
                    cout << "Ton:" << " " << weight / 0.000157473 << endl;
                }
            }
            else if (unit_select == 'L') {
                for (auto& length_list : length_units)
                {
                    cout << "Length: " << length_list << endl;
                }

                enter_unit_convert();
                convert = convert_upper_toupper(convert);

                if (convert == "MM")
                {
                    input_length();

                    cout << "CM:" << " " << length / 10 << endl;
                    cout << "M:" << " " << length / 1000 << endl;
                    cout << "KM:" << " " << length / 1000000 << endl;
                    cout << "IN:" << " " << length / 25.4 << endl;
                    cout << "FT:" << " " << length / 25.4 << endl;
                }
                else if (convert == "CM")
                {
                    input_length();

                    cout << "MM:" << " " << length / 10 << endl;
                    cout << "M:" << " " << length / 10 << endl;
                    cout << "KM:" << " " << length / 100000 << endl;
                    cout << "IN:" << " " << length / 2.54 << endl;
                    cout << "FT:" << " " << length / 30.48 << endl;
                }
                else if (convert == "M")
                {
                    input_length();
                }
                else if (convert == "KM")
                {
                    input_length();
                }
                else if (convert == "IN")
                {
                    input_length();
                }
                else if (convert == "FT")
                {
                    input_length();
                }
            }
        }
        else
        {
            cout << "\n" << "Invalid input" << "\n" << endl;
        }
    } while (true);

    return 0;
}
