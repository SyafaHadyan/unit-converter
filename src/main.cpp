#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

double temp;
double weight;
double length;
char unit_select;
string convert;

void newline()
{
    cout << "\n" << endl;
}

void input_unit_convert()
{
    cout << "Enter Unit" << ":" << " ";
    cin >> convert;

    std::transform(convert.begin(), convert.end(), convert.begin(), ::toupper);
}

void input_temperature()
{
    cout << "Enter temperature" << ":" << " ";
    cin >> temp;
}

void input_weight()
{
    cout << "Enter weight" << ":" << " ";
    cin >> weight;
}

void input_length()
{
    cout << "Enter length" << ":" << " ";
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
        "(MG) Milligram",
        "(G) Gram",
        "(KG) Kilogram",
        "(OZ) Ounce",
        "(LB) Pound",
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
        cout << "\n" << endl;
        cout << "(T)" << " " << "Temperature" << "\n" << endl;
        cout << "(W)" << " " << "Weight" << "\n" << endl;
        cout << "(L)" << " " << "Length" << "\n" << endl;
        
        cout << "Select unit" << ":" << " ";
        cin >> unit_select;

        if (islower(unit_select))
        {
            unit_select = toupper(unit_select);
        }

        if (unit_select == 'T' || unit_select == 'W' || unit_select == 'L')
        {
            if (unit_select == 'T')
                {
                    for (auto& temperature_list : temperature_units)
                    {
                    cout << "\n" << temperature_list << "\n" << endl;
                    }

                input_unit_convert();

                if (convert == "C")
                {
                    input_temperature();

                    newline();
                    cout << "Fahrenheit" << ":" << " " << ((temp * 9) / 5) + 32 << endl;
                    cout << "Kelvin" << ":" << " " << temp + 273.15 << endl;
                    
                }
                else if (convert == "F")
                {
                    input_temperature();

                    newline();
                    cout << "Celcius" << ":" << " " << ((temp - 32) * 5) / 9 << endl;
                    cout << "Kelvin" << ":" << " " << temp + 459.67 << endl;
                }
                else if (convert == "K")
                {
                    input_temperature();

                    newline();
                    cout << "Celcius" << ":" << " " << (temp - 273.15) << endl;
                    cout << "Fahrenheit" << ":" << " " << ((temp - 273.15) * 9) / 5 + 32 << endl;
                }
            }
            else if (unit_select == 'W')
            {
                for (auto& weight_list : weight_units)
                {
                    cout << "\n" << weight_list << "\n" << endl;
                }

                input_unit_convert();

                if (convert == "MG")
                {
                    input_weight();

                    newline();
                    cout << "Gram" << ":" << " " << weight * 10 << endl;
                    cout << "Kilogram" << ":" << " " << weight * 0.000001 << endl;
                    cout << "Ounce" << ":" << " " << weight * 0.03527396195 << endl;
                    cout << "Pound" << ":" << " " << weight * 0.0000022046 << endl;
                    cout << "Ton" << ":" << " " << weight * 0.00000000110231 << endl;
                    cout << "Stone" << ":" << " " << weight * 0.000000157473 << endl;
                }
                else if (convert == "G")
                {
                    input_weight();

                    newline();
                    cout << "Milligram" << ":" << " " << weight * 1000 << endl;
                    cout << "Kilogram" << ":" << " " << weight * 0.001 << endl;
                    cout << "Ounce" << ":" << " " << weight * 0.03527396195 << endl;
                    cout << "Pound" << ":" << " " << weight * 0.0022046 << endl;
                    cout << "Ton" << ":" << " " << weight * 0.00000110231 << endl;
                    cout << "Stone" << ":" << " " << weight * 0.000157473 << endl;
                }
                else if (convert == "OZ")
                {
                    input_weight();

                    newline();
                    cout << "Milligram" << ":" << " " << weight * 35273.96195 << endl;
                    cout << "Gram" << ":" << " " << weight * 35.27396195 << endl;
                    cout << "Kilogram" << ":" << " " << weight * 0.0283495 << endl;
                    cout << "Pound" << ":" << " " << weight * 0.0625 << endl;
                    cout << "Ton" << ":" << " " << weight * 0.00003125 << endl;
                    cout << "Stone" << ":" << " " << weight * 0.00446429 << endl;
                }
                else if (convert == "LB")
                {
                    input_weight();

                    newline();
                    cout << "Milligram" << ":" << " " << weight * 453592.37 << endl;
                    cout << "Gram" << ":" << " " << weight * 453.59237 << endl;
                    cout << "Kilogram" << ":" << " " << weight * 0.45359237 << endl;
                    cout << "Ounce" << ":" << " " << weight * 16 << endl;
                    cout << "Ton" << ":" << " " << weight * 0.0005 << endl;
                    cout << "Stone" << ":" << " " << weight * 0.07142857 << endl;
                }
                else if (convert == "TON")
                {
                    input_weight();

                    newline();
                    cout << "Milligram" << ":" << " " << weight * 1000000000 << endl;
                    cout << "Gram" << ":" << " " << weight * 1000000 << endl;
                    cout << "Kilogram" << ":" << " " << weight * 1000 << endl;
                    cout << "Ounce" << ":" << " " << weight * 35273.96195 << endl;
                    cout << "Pound" << ":" << " " << weight * 2204.62262185 << endl;
                    cout << "Stone" << ":" << " " << weight * 157.473044 << endl;
                }
                else if (convert == "ST")
                {
                    input_weight();

                    newline();
                    cout << "Milligram" << ":" << " " << weight * 6350000 << endl;
                    cout << "Gram" << ":" << " " << weight * 6350.29318 << endl;
                    cout << "Kilogram" << ":" << " " << weight * 6.35029318 << endl;
                    cout << "Ounce" << ":" << " " << weight * 224 << endl;
                    cout << "Pound" << ":" << " " << weight * 0.157473044 << endl;
                    cout << "Ton" << ":" << " " << weight * 0.000157473044 << endl;
                }
            }
            else if (unit_select == 'L') {
                for (auto& length_list : length_units)
                {
                    cout << "\n" << length_list << endl;
                }

                input_unit_convert();

                if (convert == "MM")
                {
                    input_length();

                    newline();
                    cout << "CM" << ":" << " " << length / 10 << endl;
                    cout << "M" << ":" << " " << length / 1000 << endl;
                    cout << "KM" << ":" << " " << length / 1000000 << endl;
                    cout << "IN" << ":" << " " << length / 25.4 << endl;
                    cout << "FT" << ":" << " " << length / 304.8 << endl;
                }
                else if (convert == "CM")
                {
                    input_length();

                    newline();
                    cout << "MM" << ":" << " " << length * 10 << endl;
                    cout << "M" << ":" << " " << length / 100 << endl;
                    cout << "KM" << ":" << " " << length / 100000 << endl;
                    cout << "IN" << ":" << " " << length / 2.54 << endl;
                    cout << "FT" << ":" << " " << length / 30.48 << endl;
                }
                else if (convert == "M")
                {
                    input_length();

                    newline();
                    cout << "MM" << ":" << " " << length * 1000 << endl;
                    cout << "CM" << ":" << " " << length * 100 << endl;
                    cout << "KM" << ":" << " " << length / 1000 << endl;
                    cout << "IN" << ":" << " " << length / 0.0254 << endl;
                    cout << "FT" << ":" << " " << length / 0.3048 << endl;
                }
                else if (convert == "KM")
                {
                    input_length();

                    newline();
                    cout << "MM" << ":" << " " << length * 1000000 << endl;
                    cout << "CM" << ":" << " " << length * 100000 << endl;
                    cout << "M" << ":" << " " << length * 1000 << endl;
                    cout << "IN" << ":" << " " << length / 0.0254 * 1000 << endl;
                    cout << "FT" << ":" << " " << length / 0.3048 * 1000 << endl;
                }
                else if (convert == "IN")
                {
                    input_length();

                    newline();
                    cout << "MM" << ":" << " " << length * 25.4 << endl;
                    cout << "CM" << ":" << " " << length * 2.54 << endl;
                    cout << "M" << ":" << " " << length * 0.0254 << endl;
                    cout << "KM" << ":" << " " << length / 1000 * 0.0254 << endl;
                    cout << "FT" << ":" << " " << length / 12 << endl;
                }
                else if (convert == "FT")
                {
                    input_length();

                    newline();
                    cout << "MM" << ":" << " " << length * 304.8 << endl;
                    cout << "CM" << ":" << " " << length * 30.48 << endl;
                    cout << "M" << ":" << " " << length * 0.3048 << endl;
                    cout << "KM" << ":" << " " << length / 1000 * 0.3048 << endl;
                    cout << "IN" << ":" << " " << length * 12 << endl;
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
