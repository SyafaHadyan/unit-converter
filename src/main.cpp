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
        "(CT) Carat",
        "(DWT) Pennyweight",
        "(G) Gram",
        "(GR) Grain",
        "(HWT) Hundredweight",
        "(KG) Kilogram",
        "(LB) Pound",
        "(LT) Long Ton",
        "(MG) Milligram",
        "(MT) Metric Ton",
        "(OZ) Ounce",
        "(ST) Stone",
        "(TL) Troy Ounce",
        "(TON) Ton"
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

                if (convert == "CT")
                {
                    input_weight();

                    newline();

                    cout << "Gram" << ":" << " " << weight * 0.2 << endl;
                    cout << "Ounce" << ":" << " " << weight * 0.00705479239 << endl;
                    cout << "Pound" << ":" << " " << weight * 0.000440924524 << endl;
                    cout << "Carat" << ":" << " " << weight << endl;
                    cout << "Pennyweight" << ":" << " " << weight * 0.128602905 << endl;
                    cout << "Grain" << ":" << " " << weight * 3.08647167 << endl;
                }
                else if (convert == "DWT")
                {
                    input_weight();

                    newline();

                    cout << "Gram" << ":" << " " << weight * 1.55517384 << endl;
                    cout << "Ounce" << ":" << " " << weight * 0.0548571429 << endl;
                    cout << "Pound" << ":" << " " << weight * 0.00342857143 << endl;
                    cout << "Carat" << ":" << " " << weight * 3.08647167 << endl;
                    cout << "Pennyweight" << ":" << " " << weight << endl;
                    cout << "Grain" << ":" << " " << weight * 24 << endl;
                }
                else if (convert == "G")
                {
                    input_weight();

                    newline();

                    cout << "Kilogram" << ":" << " " << weight * 0.001 << endl;
                    cout << "Metric Ton" << ":" << " " << weight * 0.000001 << endl;
                    cout << "Ounce" << ":" << " " << weight * 0.0352739619 << endl;
                    cout << "Pound" << ":" << " " << weight * 0.00220462262 << endl;
                    cout << "Long Ton" << ":" << " " << weight * 0.000984206527 << endl;
                    cout << "Short Ton" << ":" << " " << weight * 0.000110231131 << endl;
                }
                else if (convert == "GR")
                {
                    input_weight();

                    newline();

                    cout << "Gram" << ":" << " " << weight * 0.06479891 << endl;
                    cout << "Ounce" << ":" << " " << weight * 0.00228571429 << endl;
                    cout << "Pound" << ":" << " " << weight * 0.000142857143 << endl;
                    cout << "Carat" << ":" << " " << weight * 5 << endl;
                    cout << "Pennyweight" << ":" << " " << weight * 1.15740741 << endl;
                    cout << "Grain" << ":" << " " << weight << endl;
                }
                else if (convert == "HWT")
                {
                    input_weight();

                    newline();

                    cout << "Kilogram" << ":" << " " << weight * 0.05 << endl;
                    cout << "Metric Ton" << ":" << " " << weight * 0.00005 << endl;
                    cout << "Ounce" << ":" << " " << weight * 141.747616 << endl;
                    cout << "Pound" << ":" << " " << weight * 0.0984206527 << endl;
                    cout << "Long Ton" << ":" << " " << weight * 0.0000497105 << endl;
                    cout << "Short Ton" << ":" << " " << weight * 0.0000551156 << endl;
                }
                else if (convert == "KG")
                {
                    input_weight();

                    newline();

                    cout << "Gram" << ":" << " " << weight * 1000 << endl;
                    cout << "Metric Ton" << ":" << " " << weight * 0.001 << endl;
                    cout << "Ounce" << ":" << " " << weight * 35.2739619 << endl;
                    cout << "Pound" << ":" << " " << weight * 2.20462262 << endl;
                    cout << "Long Ton" << ":" << " " << weight * 0.000984206527 << endl;
                    cout << "Short Ton" << ":" << " " << weight * 0.00110231131 << endl;
                }
                else if (convert == "LB")
                {
                    input_weight();

                    newline();

                    cout << "Gram" << ":" << " " << weight * 453.592 << endl;
                    cout << "Ounce" << ":" << " " << weight * 16 << endl;
                    cout << "Pound" << ":" << " " << weight << endl;
                    cout << "Long Ton" << ":" << " " << weight * 0.000446428571 << endl;
                    cout << "Short Ton" << ":" << " " << weight * 0.0005 << endl;
                }
                else if (convert == "LT")
                {
                    input_weight();

                    newline();

                    cout << "Kilogram" << ":" << " " << weight * 1016.04691 << endl;
                    cout << "Metric Ton" << ":" << " " << weight * 1.01604691 << endl;
                    cout << "Ounce" << ":" << " " << weight * 35840 << endl;
                    cout << "Pound" << ":" << " " << weight * 2240 << endl;
                    cout << "Short Ton" << ":" << " " << weight * 1.12 << endl;
                }
                else if (convert == "MG")
                {
                    input_weight();

                    newline();

                    cout << "Gram" << ":" << " " << weight * 0.001 << endl;
                    cout << "Ounce" << ":" << " " << weight * 0.0000352739619 << endl;
                    cout << "Pound" << ":" << " " << weight * 0.00000220462262 << endl;
                    cout << "Carat" << ":" << " " << weight * 5 << endl;
                    cout << "Pennyweight" << ":" << " " << weight * 0.00115740741 << endl;
                    cout << "Grain" << ":" << " " << weight * 0.0154323584 << endl;
                }
                else if (convert == "MT")
                {
                    input_weight();

                    newline();

                    cout << "Gram" << ":" << " " << weight * 1000000 << endl;
                    cout << "Kilogram" << ":" << " " << weight * 1000 << endl;
                    cout << "Ounce" << ":" << " " << weight * 35273.9619 << endl;
                    cout << "Pound" << ":" << " " << weight * 2204.62262 << endl;
                    cout << "Long Ton" << ":" << " " << weight * 0.984206527 << endl;
                    cout << "Short Ton" << ":" << " " << weight * 1.10231131 << endl;
                }
                else if (convert == "OZ")
                {
                    input_weight();

                    newline();

                    cout << "Gram" << ":" << " " << weight * 28.3495231 << endl;
                    cout << "Pound" << ":" << " " << weight * 0.0625 << endl;
                    cout << "Long Ton" << ":" << " " << weight * 0.0000279017857 << endl;
                    cout << "Short Ton" << ":" << " " << weight * 0.00003125 << endl;
                }
                else if (convert == "ST")
                {
                    input_weight();

                    newline();

                    cout << "Kilogram" << ":" << " " << weight * 6.35029318 << endl;
                    cout << "Metric Ton" << ":" << " " << weight * 0.00635029318 << endl;
                    cout << "Ounce" << ":" << " " << weight * 224 << endl;
                    cout << "Pound" << ":" << " " << weight * 14 << endl;
                    cout << "Short Ton" << ":" << " " << weight * 0.007 << endl;
                }
                else if (convert == "TL")
                {
                    input_weight();

                    newline();

                    cout << "Gram" << ":" << " " << weight * 31.1034768 << endl;
                    cout << "Ounce" << ":" << " " << weight << endl;
                    cout << "Pound" << ":" << " " << weight * 0.0685714286 << endl;
                }
                else if (convert == "TON")
                {
                    input_weight();

                    newline();

                    cout << "Kilogram" << ":" << " " << weight * 907.18474 << endl;
                    cout << "Metric Ton" << ":" << " " << weight * 0.90718474 << endl;
                    cout << "Ounce" << ":" << " " << weight * 32000 << endl;
                    cout << "Pound" << ":" << " " << weight * 2000 << endl;
                    cout << "Long Ton" << ":" << " " << weight * 0.892857143 << endl;
                }
            }            else if (unit_select == 'L') {
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
