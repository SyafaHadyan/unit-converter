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
        "(CG) Centigram",
        "(DG) Decigram",
        "(G) Gram",
        "(DAG) Dekagram",
        "(HG) Hectogram",
        "(KG) Kilogram",
        "(MT) Metric Ton",
        "(GR) Grain",
        "(DR) Dram",
        "(OZ) Ounce",
        "(LB) Pound",
        "(SHCWT) Short Hundredweight",
        "(LHCWT) Long Hundredweight",
        "(ST) Short Ton",
        "(LT) Long Ton",
        "(APSCR) Apothecaries' Scruple",
        "(DWT) Pennyweight",
        "(APDR) Apothecaries' Dram",
        "(APOZ) Apothecaries' Ounce",
        "(TPLB) Troy or Apothecaries' Pound"
    };

    vector<string> length_units =
    {
        "(M) Meter",
        "(KM) Kilometer",
        "(CM) Centimeter",
        "(MM) Millimeter",
        "(MC) Micrometer",
        "(NM) Nanometer",
        "(MI) Mile",
        "(YD) Yard",
        "(FT) Foot",
        "(IN) Inch"
        "(NAUT) Nautical Mile"
        "(LIGHT) Light Year"
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

                    cout << "Centigram" << ":" << " " << weight * 0.1 << endl;
                    cout << "Decigram" << ":" << " " << weight * 0.01 << endl;
                    cout << "Gram" << ":" << " " << weight * 0.001 << endl;
                    cout << "Dekagram" << ":" << " " << weight * 0.0001 << endl;
                    cout << "Hectogram" << ":" << " " << weight * 0.00001 << endl;
                    cout << "Kilogram" << ":" << " " << weight * 0.000001 << endl;
                    cout << "Metric Ton" << ":" << " " << weight * 1e-9 << endl;
                    cout << "Grain" << ":" << " " << weight * 0.0154323584 << endl;
                    cout << "Dram" << ":" << " " << weight * 0.000564383391 << endl;
                    cout << "Ounce" << ":" << " " << weight * 3.52739619e-5 << endl;
                    cout << "Pound" << ":" << " " << weight * 2.20462262e-6 << endl;
                    cout << "Short Hundredweight" << ":" << " " << weight * 2.20462262e-7 << endl;
                    cout << "Long Hundredweight" << ":" << " " << weight * 1.96841306e-7 << endl;
                    cout << "Short Ton" << ":" << " " << weight * 1.10231131e-9 << endl;
                    cout << "Long Ton" << ":" << " " << weight * 9.84206528e-10 << endl;
                    cout << "Apothecaries' Scruple" << ":" << " " << weight * 0.000771617917 << endl;
                    cout << "Pennyweight" << ":" << " " << weight * 0.0000154323584 << endl;
                    cout << "Apothecaries' Dram" << ":" << " " << weight * 0.000564383391 << endl;
                    cout << "Apothecaries' Ounce" << ":" << " " << weight * 3.52739619e-5 << endl;
                    cout << "Troy or Apothecaries' Pound" << ":" << " " << weight * 2.20462262e-6 << endl;
                }
                else if (convert == "CG")
                {
                    input_weight();

                    newline();

                    cout << "Milligram" << ":" << " " << weight * 10 << endl;
                    cout << "Decigram" << ":" << " " << weight * 0.1 << endl;
                    cout << "Gram" << ":" << " " << weight * 0.01 << endl;
                    cout << "Dekagram" << ":" << " " << weight * 0.001 << endl;
                    cout << "Hectogram" << ":" << " " << weight * 0.0001 << endl;
                    cout << "Kilogram" << ":" << " " << weight * 0.00001 << endl;
                    cout << "Metric Ton" << ":" << " " << weight * 1e-8 << endl;
                    cout << "Grain" << ":" << " " << weight * 0.154323584 << endl;
                    cout << "Dram" << ":" << " " << weight * 0.00564383391 << endl;
                    cout << "Ounce" << ":" << " " << weight * 0.000352739619 << endl;
                    cout << "Pound" << ":" << " " << weight * 2.20462262e-5 << endl;
                    cout << "Short Hundredweight" << ":" << " " << weight * 2.20462262e-6 << endl;
                    cout << "Long Hundredweight" << ":" << " " << weight * 1.96841306e-6 << endl;
                    cout << "Short Ton" << ":" << " " << weight * 1.10231131e-8 << endl;
                    cout << "Long Ton" << ":" << " " << weight * 9.84206528e-9 << endl;
                    cout << "Apothecaries' Scruple" << ":" << " " << weight * 0.0000771617917 << endl;
                    cout << "Pennyweight" << ":" << " " << weight * 0.00154323584 << endl;
                    cout << "Apothecaries' Dram" << ":" << " " << weight * 0.00564383391 << endl;
                    cout << "Apothecaries' Ounce" << ":" << " " << weight * 0.000352739619 << endl;
                    cout << "Troy or Apothecaries' Pound" << ":" << " " << weight * 2.20462262e-5 << endl;
                }
                else if (convert == "DG")
                {
                    input_weight();

                    newline();

                    cout << "Milligram" << ":" << " " << weight * 100 << endl;
                    cout << "Centigram" << ":" << " " << weight * 10 << endl;
                    cout << "Gram" << ":" << " " << weight * 0.1 << endl;
                    cout << "Dekagram" << ":" << " " << weight * 0.01 << endl;
                    cout << "Hectogram" << ":" << " " << weight * 0.001 << endl;
                    cout << "Kilogram" << ":" << " " << weight * 0.0001 << endl;
                    cout << "Metric Ton" << ":" << " " << weight * 1e-7 << endl;
                    cout << "Grain" << ":" << " " << weight * 1.54323584 << endl;
                    cout << "Dram" << ":" << " " << weight * 0.0564383391 << endl;
                    cout << "Ounce" << ":" << " " << weight * 0.00352739619 << endl;
                    cout << "Pound" << ":" << " " << weight * 0.000220462262 << endl;
                    cout << "Short Hundredweight" << ":" << " " << weight * 2.20462262e-5 << endl;
                    cout << "Long Hundredweight" << ":" << " " << weight * 1.96841306e-5 << endl;
                    cout << "Short Ton" << ":" << " " << weight * 1.10231131e-7 << endl;
                    cout << "Long Ton" << ":" << " " << weight * 9.84206528e-8 << endl;
                    cout << "Apothecaries' Scruple" << ":" << " " << weight * 0.000771617917 << endl;
                    cout << "Pennyweight" << ":" << " " << weight * 0.0154323584 << endl;
                    cout << "Apothecaries' Dram" << ":" << " " << weight * 0.0564383391 << endl;
                    cout << "Apothecaries' Ounce" << ":" << " " << weight * 0.00352739619 << endl;
                    cout << "Troy or Apothecaries' Pound" << ":" << " " << weight * 0.000220462262 << endl;
                }
                else if (convert == "G")
                {
                    input_weight();

                    newline();

                    cout << "Milligram" << ":" << " " << weight * 1000 << endl;
                    cout << "Centigram" << ":" << " " << weight * 100 << endl;
                    cout << "Decigram" << ":" << " " << weight * 10 << endl;
                    cout << "Dekagram" << ":" << " " << weight * 0.1 << endl;
                    cout << "Hectogram" << ":" << " " << weight * 0.01 << endl;
                    cout << "Kilogram" << ":" << " " << weight * 0.001 << endl;
                    cout << "Metric Ton" << ":" << " " << weight * 1e-6 << endl;
                    cout << "Grain" << ":" << " " << weight * 15.4323584 << endl;
                    cout << "Dram" << ":" << " " << weight * 0.564383391 << endl;
                    cout << "Ounce" << ":" << " " << weight * 0.0352739619 << endl;
                    cout << "Pound" << ":" << " " << weight * 0.00220462262 << endl;
                    cout << "Short Hundredweight" << ":" << " " << weight * 2.20462262e-4 << endl;
                    cout << "Long Hundredweight" << ":" << " " << weight * 1.96841306e-4 << endl;
                    cout << "Short Ton" << ":" << " " << weight * 1.10231131e-6 << endl;
                    cout << "Long Ton" << ":" << " " << weight * 9.84206528e-7 << endl;
                    cout << "Apothecaries' Scruple" << ":" << " " << weight * 0.00771617917 << endl;
                    cout << "Pennyweight" << ":" << " " << weight * 0.154323584 << endl;
                    cout << "Apothecaries' Dram" << ":" << " " << weight * 0.564383391 << endl;
                    cout << "Apothecaries' Ounce" << ":" << " " << weight * 0.0352739619 << endl;
                    cout << "Troy or Apothecaries' Pound" << ":" << " " << weight * 0.00220462262 << endl;
                }

            }
            else if (unit_select == 'L')
            {
                for (auto& length_list : length_units)
                {
                    cout << "\n" << length_list << endl;
                }

                input_unit_convert();

                if (convert == "M")
                {
                    input_length();

                    newline();

                    cout << "Kilometer" << ":" << " " << length * 0.001 << endl;
                    cout << "Centimeter" << ":" << " " << length * 100 << endl;
                    cout << "Millimeter" << ":" << " " << length * 1000 << endl;
                    cout << "Micrometer" << ":" << " " << length * 1000000 << endl;
                    cout << "Nanometer" << ":" << " " << length * 1000000000 << endl;
                    cout << "Mile" << ":" << " " << length * 0.000621371192 << endl;
                    cout << "Yard" << ":" << " " << length * 1.0936133 << endl;
                    cout << "Foot" << ":" << " " << length * 3.2808399 << endl;
                    cout << "Inch" << ":" << " " << length * 39.3700787 << endl;
                    cout << "Nautical Mile" << ":" << " " << length * 0.000539956803 << endl;
                    cout << "Light Year" << ":" << " " << length * 1.057000834e-16 << endl;
                }
                else if (convert == "KM")
                {
                    input_length();

                    newline();

                    cout << "Meter" << ":" << " " << length * 1000 << endl;
                    cout << "Centimeter" << ":" << " " << length * 100000 << endl;
                    cout << "Millimeter" << ":" << " " << length * 1000000 << endl;
                    cout << "Micrometer" << ":" << " " << length * 1000000000 << endl;
                    cout << "Nanometer" << ":" << " " << length * 1000000000000 << endl;
                    cout << "Mile" << ":" << " " << length * 0.621371192 << endl;
                    cout << "Yard" << ":" << " " << length * 1093.6133 << endl;
                    cout << "Foot" << ":" << " " << length * 3280.8399 << endl;
                    cout << "Inch" << ":" << " " << length * 39370.0787 << endl;
                    cout << "Nautical Mile" << ":" << " " << length * 0.539956803 << endl;
                    cout << "Light Year" << ":" << " " << length * 1.057000834e-13 << endl;
                }
                else if (convert == "CM")
                {
                    input_length();

                    newline();

                    cout << "Meter" << ":" << " " << length * 0.01 << endl;
                    cout << "Kilometer" << ":" << " " << length * 0.00001 << endl;
                    cout << "Millimeter" << ":" << " " << length * 10 << endl;
                    cout << "Micrometer" << ":" << " " << length * 10000 << endl;
                    cout << "Nanometer" << ":" << " " << length * 10000000 << endl;
                    cout << "Mile" << ":" << " " << length * 0.00000621371192 << endl;
                    cout << "Yard" << ":" << " " << length * 0.010936133 << endl;
                    cout << "Foot" << ":" << " " << length * 0.032808399 << endl;
                    cout << "Inch" << ":" << " " << length * 0.393700787 << endl;
                    cout << "Nautical Mile" << ":" << " " << length * 0.00000539956803 << endl;
                    cout << "Light Year" << ":" << " " << length * 1.057000834e-17 << endl;
                }
                else if (convert == "MM")
                {
                    input_length();

                    newline();

                    cout << "Meter" << ":" << " " << length * 0.001 << endl;
                    cout << "Kilometer" << ":" << " " << length * 0.000001 << endl;
                    cout << "Centimeter" << ":" << " " << length * 0.1 << endl;
                    cout << "Micrometer" << ":" << " " << length * 1000 << endl;
                    cout << "Nanometer" << ":" << " " << length * 1000000 << endl;
                    cout << "Mile" << ":" << " " << length * 0.000000621371192 << endl;
                    cout << "Yard" << ":" << " " << length * 0.0010936133 << endl;
                    cout << "Foot" << ":" << " " << length * 0.0032808399 << endl;
                    cout << "Inch" << ":" << " " << length * 0.0393700787 << endl;
                    cout << "Nautical Mile" << ":" << " " << length * 0.000000539956803 << endl;
                    cout << "Light Year" << ":" << " " << length * 1.057000834e-18 << endl;
                }
                else if (convert == "MC")
                {
                    input_length();

                    newline();

                    cout << "Meter" << ":" << " " << length * 0.000001 << endl;
                    cout << "Kilometer" << ":" << " " << length * 0.000000001 << endl;
                    cout << "Centimeter" << ":" << " " << length * 0.0001 << endl;
                    cout << "Millimeter" << ":" << " " << length * 0.001 << endl;
                    cout << "Nanometer" << ":" << " " << length * 1000 << endl;
                    cout << "Mile" << ":" << " " << length * 0.000000000621371192 << endl;
                    cout << "Yard" << ":" << " " << length * 0.0000010936133 << endl;
                    cout << "Foot" << ":" << " " << length * 0.0000032808399 << endl;
                    cout << "Inch" << ":" << " " << length * 0.0000393700787 << endl;
                    cout << "Nautical Mile" << ":" << " " << length * 0.000000000539956803 << endl;
                    cout << "Light Year" << ":" << " " << length * 1.057000834e-22 << endl;
                }
                else if (convert == "NM")
                {
                    input_length();

                    newline();

                    cout << "Meter" << ":" << " " << length * 0.000000001 << endl;
                    cout << "Kilometer" << ":" << " " << length * 0.000000000001 << endl;
                    cout << "Centimeter" << ":" << " " << length * 0.0000001 << endl;
                    cout << "Millimeter" << ":" << " " << length * 0.000001 << endl;
                    cout << "Micrometer" << ":" << " " << length * 0.001 << endl;
                    cout << "Mile" << ":" << " " << length * 0.000000000000621371192 << endl;
                    cout << "Yard" << ":" << " " << length * 0.0000000010936133 << endl;
                    cout << "Foot" << ":" << " " << length * 0.0000000032808399 << endl;
                    cout << "Inch" << ":" << " " << length * 0.0000000393700787 << endl;
                    cout << "Nautical Mile" << ":" << " " << length * 0.000000000000539956803 << endl;
                    cout << "Light Year" << ":" << " " << length * 1.057000834e-25 << endl;
                }
                else if (convert == "MI")
                {
                    input_length();

                    newline();

                    cout << "Meter" << ":" << " " << length * 1609.344 << endl;
                    cout << "Kilometer" << ":" << " " << length * 1.609344 << endl;
                    cout << "Centimeter" << ":" << " " << length * 160934.4 << endl;
                    cout << "Millimeter" << ":" << " " << length * 1609344 << endl;
                    cout << "Micrometer" << ":" << " " << length * 1609344000 << endl;
                    cout << "Nanometer" << ":" << " " << length * 1609344000000 << endl;
                    cout << "Yard" << ":" << " " << length * 1760 << endl;
                    cout << "Foot" << ":" << " " << length * 5280 << endl;
                    cout << "Inch" << ":" << " " << length * 63360 << endl;
                    cout << "Nautical Mile" << ":" << " " << length * 0.868976242 << endl;
                    cout << "Light Year" << ":" << " " << length * 1.701114279e-13 << endl;
                }
                else if (convert == "YD")
                {
                    input_length();

                    newline();

                    cout << "Meter" << ":" << " " << length * 0.9144 << endl;
                    cout << "Kilometer" << ":" << " " << length * 0.0009144 << endl;
                    cout << "Centimeter" << ":" << " " << length * 91.44 << endl;
                    cout << "Millimeter" << ":" << " " << length * 914.4 << endl;
                    cout << "Micrometer" << ":" << " " << length * 914400 << endl;
                    cout << "Nanometer" << ":" << " " << length * 914400000 << endl;
                    cout << "Mile" << ":" << " " << length * 0.000568181818 << endl;
                    cout << "Foot" << ":" << " " << length * 3 << endl;
                    cout << "Inch" << ":" << " " << length * 36 << endl;
                    cout << "Nautical Mile" << ":" << " " << length * 0.000493736501 << endl;
                    cout << "Light Year" << ":" << " " << length * 9.460730472e-17 << endl;
                }
                else if (convert == "FT")
                {
                    input_length();

                    newline();

                    cout << "Meter" << ":" << " " << length * 0.3048 << endl;
                    cout << "Kilometer" << ":" << " " << length * 0.0003048 << endl;
                    cout << "Centimeter" << ":" << " " << length * 30.48 << endl;
                    cout << "Millimeter" << ":" << " " << length * 304.8 << endl;
                    cout << "Micrometer" << ":" << " " << length * 304800 << endl;
                    cout << "Nanometer" << ":" << " " << length * 304800000 << endl;
                    cout << "Mile" << ":" << " " << length * 0.000189393939 << endl;
                    cout << "Yard" << ":" << " " << length * 0.333333333 << endl;
                    cout << "Inch" << ":" << " " << length * 12 << endl;
                    cout << "Nautical Mile" << ":" << " " << length * 0.000164578834 << endl;
                    cout << "Light Year" << ":" << " " << length * 3.221738491e-17 << endl;
                }
                else if (convert == "IN")
                {
                    input_length();

                    newline();

                    cout << "Meter" << ":" << " " << length * 0.0254 << endl;
                    cout << "Kilometer" << ":" << " " << length * 0.0000254 << endl;
                    cout << "Centimeter" << ":" << " " << length * 2.54 << endl;
                    cout << "Millimeter" << ":" << " " << length * 25.4 << endl;
                    cout << "Micrometer" << ":" << " " << length * 25400 << endl;
                    cout << "Nanometer" << ":" << " " << length * 25400000 << endl;
                    cout << "Mile" << ":" << " " << length * 0.0000157828283 << endl;
                    cout << "Yard" << ":" << " " << length * 0.0277777778 << endl;
                    cout << "Foot" << ":" << " " << length * 0.0833333333 << endl;
                    cout << "Nautical Mile" << ":" << " " << length * 0.0000137149028 << endl;
                    cout << "Light Year" << ":" << " " << length * 2.684782076e-18 << endl;
                }
                else if (convert == "NAUT")
                {
                    input_length();

                    newline();

                    cout << "Meter" << ":" << " " << length * 1852 << endl;
                    cout << "Kilometer" << ":" << " " << length * 1.852 << endl;
                    cout << "Centimeter" << ":" << " " << length * 185200 << endl;
                    cout << "Millimeter" << ":" << " " << length * 1852000 << endl;
                    cout << "Micrometer" << ":" << " " << length * 1852000000 << endl;
                    cout << "Nanometer" << ":" << " " << length * 1852000000000 << endl;
                    cout << "Mile" << ":" << " " << length * 1.15077945 << endl;
                    cout << "Yard" << ":" << " " << length * 2025.37183 << endl;
                    cout << "Foot" << ":" << " " << length * 6076.11549 << endl;
                    cout << "Inch" << ":" << " " << length * 72913.3858 << endl;
                    cout << "Light Year" << ":" << " " << length * 1.85301817e-13 << endl;
                }
                else if (convert == "LIGHT")
                {
                    input_length();

                    newline();

                    cout << "Meter" << ":" << " " << length * 9460730472580800 << endl;
                    cout << "Kilometer" << ":" << " " << length * 9460730472580.8 << endl;
                    cout << "Centimeter" << ":" << " " << length * 946073047258080000 << endl;
                    cout << "Millimeter" << ":" << " " << length * 9460730472580800000 << endl;
                    cout << "Micrometer" << ":" << " " << length * 9460730472580800000000 << endl;
                    cout << "Nanometer" << ":" << " " << length * 9460730472580800000000000 << endl;
                    cout << "Mile" << ":" << " " << length * 5878625373183.66 << endl;
                    cout << "Yard" << ":" << " " << length * 10346380896074400 << endl;
                    cout << "Foot" << ":" << " " << length * 31039142688223200 << endl;
                    cout << "Inch" << ":" << " " << length * 372469712258678000 << endl;
                    cout << "Nautical Mile" << ":" << " " << length * 508925608737.49 << endl;
                }
            }
        }
        else
        {
            cout << "\n" << "Invalid input" << "\n" << endl;
        }
    } while (unit_select != 'Q');

    return 0;
}
