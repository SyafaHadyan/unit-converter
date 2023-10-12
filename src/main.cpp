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
        "(ANG) Angstrom",
        "(CM) Centimeter",
        "(DM) Decimeter",
        "(FT) Foot",
        "(FUR) Furlong",
        "(H) Hand",
        "(IN) Inch",
        "(KM) Kilometer",
        "(LINK) Link",
        "(M) Meter",
        "(MI) Mile",
        "(MM) Millimeter",
        "(NM) Nautical Mile",
        "(PER) Perch",
        "(POLE) Pole",
        "(ROD) Rod",
        "(YD) Yard"
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

                    cout << "Carat" << ":" << " " << weight << endl;
                    cout << "Grain" << ":" << " " << weight * 3.08647167 << endl;
                    cout << "Gram" << ":" << " " << weight * 0.2 << endl;
                    cout << "Ounce" << ":" << " " << weight * 0.00705479239 << endl;
                    cout << "Pennyweight" << ":" << " " << weight * 0.128602905 << endl;
                    cout << "Pound" << ":" << " " << weight * 0.000440924524 << endl;
                }
                else if (convert == "DWT")
                {
                    input_weight();

                    newline();

                    cout << "DWT" << ":" << " " << weight << endl;
                    cout << "Grain" << ":" << " " << weight * 24 << endl;
                    cout << "Gram" << ":" << " " << weight * 1.55517384 << endl;
                    cout << "Ounce" << ":" << " " << weight * 0.0548571429 << endl;
                    cout << "Pennyweight" << ":" << " " << weight * 1.15740741 << endl;
                    cout << "Pound" << ":" << " " << weight * 0.00342857143 << endl;
                }
                else if (convert == "G")
                {
                    input_weight();

                    newline();

                    cout << "Gram" << ":" << " " << weight << endl;
                    cout << "Kilogram" << ":" << " " << weight * 0.001 << endl;
                    cout << "Long Ton" << ":" << " " << weight * 0.000984206527 << endl;
                    cout << "Metric Ton" << ":" << " " << weight * 0.000001 << endl;
                    cout << "Ounce" << ":" << " " << weight * 0.0352739619 << endl;
                    cout << "Pound" << ":" << " " << weight * 0.00220462262 << endl;
                    cout << "Short Ton" << ":" << " " << weight * 0.000110231131 << endl;
                }
                else if (convert == "GR")
                {
                    input_weight();

                    newline();

                    cout << "Carat" << ":" << " " << weight * 5 << endl;
                    cout << "Grain" << ":" << " " << weight << endl;
                    cout << "Gram" << ":" << " " << weight * 0.06479891 << endl;
                    cout << "Ounce" << ":" << " " << weight * 0.00228571429 << endl;
                    cout << "Pennyweight" << ":" << " " << weight * 1.15740741 << endl;
                    cout << "Pound" << ":" << " " << weight * 0.000142857143 << endl;
                }
                else if (convert == "HWT")
                {
                    input_weight();

                    newline();

                    cout << "Hundredweight" << ":" << " " << weight << endl;
                    cout << "Kilogram" << ":" << " " << weight * 0.05 << endl;
                    cout << "Long Ton" << ":" << " " << weight * 0.0000497105 << endl;
                    cout << "Metric Ton" << ":" << " " << weight * 0.00005 << endl;
                    cout << "Ounce" << ":" << " " << weight * 141.747616 << endl;
                    cout << "Pound" << ":" << " " << weight * 0.0984206527 << endl;
                    cout << "Short Ton" << ":" << " " << weight * 0.0000551156 << endl;
                }
                else if (convert == "KG")
                {
                    input_weight();

                    newline();

                    cout << "Gram" << ":" << " " << weight * 1000 << endl;
                    cout << "Kilogram" << ":" << " " << weight << endl;
                    cout << "Long Ton" << ":" << " " << weight * 0.000984206527 << endl;
                    cout << "Metric Ton" << ":" << " " << weight * 0.001 << endl;
                    cout << "Ounce" << ":" << " " << weight * 35.2739619 << endl;
                    cout << "Pound" << ":" << " " << weight * 2.20462262 << endl;
                    cout << "Short Ton" << ":" << " " << weight * 0.00110231131 << endl;
                }
                else if (convert == "LB")
                {
                    input_weight();

                    newline();

                    cout << "Gram" << ":" << " " << weight * 453.592 << endl;
                    cout << "Long Ton" << ":" << " " << weight * 0.000446428571 << endl;
                    cout << "Ounce" << ":" << " " << weight * 16 << endl;
                    cout << "Pound" << ":" << " " << weight << endl;
                    cout << "Short Ton" << ":" << " " << weight * 0.0005 << endl;
                }
                else if (convert == "LT")
                {
                    input_weight();

                    newline();

                    cout << "Kilogram" << ":" << " " << weight * 1016.04691 << endl;
                    cout << "Long Ton" << ":" << " " << weight * 0.0000279017857 << endl;
                    cout << "Metric Ton" << ":" << " " << weight * 1.01604691 << endl;
                    cout << "Ounce" << ":" << " " << weight * 35840 << endl;
                    cout << "Pound" << ":" << " " << weight * 2240 << endl;
                    cout << "Short Ton" << ":" << " " << weight * 1.12 << endl;
                }
                else if (convert == "MG")
                {
                    input_weight();

                    newline();

                    cout << "Carat" << ":" << " " << weight * 5 << endl;
                    cout << "Grain" << ":" << " " << weight * 0.0154323584 << endl;
                    cout << "Gram" << ":" << " " << weight * 0.001 << endl;
                    cout << "Ounce" << ":" << " " << weight * 0.0000352739619 << endl;
                    cout << "Pennyweight" << ":" << " " << weight * 0.00115740741 << endl;
                    cout << "Pound" << ":" << " " << weight * 0.00000220462262 << endl;
                }
                else if (convert == "MT")
                {
                    input_weight();

                    newline();

                    cout << "Gram" << ":" << " " << weight * 1000000 << endl;
                    cout << "Kilogram" << ":" << " " << weight * 1000 << endl;
                    cout << "Long Ton" << ":" << " " << weight * 0.984206527 << endl;
                    cout << "Metric Ton" << ":" << " " << weight * 0.90718474 << endl;
                    cout << "Ounce" << ":" << " " << weight * 35273.9619 << endl;
                    cout << "Pound" << ":" << " " << weight * 2204.62262 << endl;
                    cout << "Short Ton" << ":" << " " << weight * 1.10231131 << endl;
                }
                else if (convert == "OZ")
                {
                    input_weight();

                    newline();

                    cout << "Long Ton" << ":" << " " << weight * 0.0000279017857 << endl;
                    cout << "Ounce" << ":" << " " << weight << endl;
                    cout << "Pound" << ":" << " " << weight * 0.0625 << endl;
                    cout << "Short Ton" << ":" << " " << weight * 0.00003125 << endl;
                }
                else if (convert == "ST")
                {
                    input_weight();

                    newline();

                    cout << "Kilogram" << ":" << " " << weight * 6.35029318 << endl;
                    cout << "Long Ton" << ":" << " " << weight * 0.0000279017857 << endl;
                    cout << "Metric Ton" << ":" << " " << weight * 0.00635029318 << endl;
                    cout << "Ounce" << ":" << " " << weight * 224 << endl;
                    cout << "Pound" << ":" << " " << weight * 14 << endl;
                    cout << "Short Ton" << ":" << " " << weight * 0.007 << endl;
                }
                else if (convert == "TL")
                {
                    input_weight();

                    newline();

                    cout << "Ounce" << ":" << " " << weight << endl;
                    cout << "Pound" << ":" << " " << weight * 0.0685714286 << endl;
                    cout << "Troy Ounce" << ":" << " " << weight * 31.1034768 << endl;
                }
                else if (convert == "TON")
                {
                    input_weight();

                    newline();

                    cout << "Gram" << ":" << " " << weight * 907184.74 << endl;
                    cout << "Kilogram" << ":" << " " << weight * 907.18474 << endl;
                    cout << "Long Ton" << ":" << " " << weight * 0.892857143 << endl;
                    cout << "Metric Ton" << ":" << " " << weight * 0.90718474 << endl;
                    cout << "Ounce" << ":" << " " << weight * 32000 << endl;
                    cout << "Pound" << ":" << " " << weight * 2000 << endl;
                }
            }
            else if (unit_select == 'L')
            {
                for (auto& length_list : length_units)
                {
                    cout << "\n" << length_list << endl;
                }

                input_unit_convert();

                if (convert == "ANG")
                {
                    input_length();

                    newline();

                    cout << "ANG" << ":" << " " << length << endl;
                    cout << "CM" << ":" << " " << length * 0.00000001 << endl;
                    cout << "DM" << ":" << " " << length * 0.000000001 << endl;
                    cout << "M" << ":" << " " << length * 0.0000000001 << endl;
                    cout << "KM" << ":" << " " << length * 0.0000000000001 << endl;
                    cout << "IN" << ":" << " " << length * 0.000000003937 << endl;
                    cout << "FT" << ":" << " " << length * 0.000000000328 << endl;
                    cout << "MI" << ":" << " " << length * 0.0000000000000621371192 << endl;
                    cout << "MM" << ":" << " " << length * 0.0000001 << endl;
                    cout << "NM" << ":" << " " << length * 0.0000000000000541148236 << endl;
                    cout << "YD" << ":" << " " << length * 0.000000000109 << endl;
                    cout << "FUR" << ":" << " " << length * 0.000000000000000621371192 << endl;
                    cout << "CH" << ":" << " " << length * 0.00000000000000621371192 << endl;
                    cout << "LINK" << ":" << " " << length * 0.0000000000000621371192 << endl;
                    cout << "ROD" << ":" << " " << length * 0.0000000000000248548477 << endl;
                    cout << "FATH" << ":" << " " << length * 0.000000000000000546806649 << endl;
                    cout << "PER" << ":" << " " << length * 0.00000000000000000621371192 << endl;
                    cout << "POLE" << ":" << " " << length * 0.0000000000000000248548477 << endl;
                    cout << "H" << ":" << " " << length * 0.00000000000000000546806649 << endl;
                    cout << "THOU" << ":" << " " << length * 0.00000003937 << endl;
                }
                else if (convert == "CM")
                {
                    input_length();

                    newline();
                    cout << "ANG" << ":" << " " << length * 100000000 << endl;
                    cout << "DM" << ":" << " " << length / 10 << endl;
                    cout << "M" << ":" << " " << length / 100 << endl;
                    cout << "KM" << ":" << " " << length / 100000 << endl;
                    cout << "IN" << ":" << " " << length / 2.54 << endl;
                    cout << "FT" << ":" << " " << length / 30.48 << endl;
                    cout << "MI" << ":" << " " << length / 160934 << endl;
                    cout << "MM" << ":" << " " << length * 10 << endl;
                    cout << "M" << ":" << " " << length / 100 << endl;
                    cout << "KM" << ":" << " " << length / 100000 << endl;
                    cout << "IN" << ":" << " " << length / 2.54 << endl;
                    cout << "FT" << ":" << " " << length / 30.48 << endl;
                }
                else if (convert == "DM")
                {
                    input_length();

                    newline();
                    cout << "ANG" << ":" << " " << length * 1000000000 << endl;
                    cout << "M" << ":" << " " << length / 10 << endl;
                    cout << "KM" << ":" << " " << length / 10000 << endl;
                    cout << "IN" << ":" << " " << length / 0.254 << endl;
                    cout << "FT" << ":" << " " << length / 3.048 << endl;
                }
                else if (convert == "FT")
                {
                    input_length();

                    newline();
                    cout << "ANG" << ":" << " " << length * 3048000 << endl;
                    cout << "CM" << ":" << " " << length * 30.48 << endl;
                    cout << "DM" << ":" << " " << length * 3.048 << endl;
                    cout << "M" << ":" << " " << length / 3.281 << endl;
                    cout << "KM" << ":" << " " << length / 3281 << endl;
                    cout << "IN" << ":" << " " << length * 12 << endl;
                    cout << "MI" << ":" << " " << length / 5280 << endl;
                    cout << "MM" << ":" << " " << length * 304.8 << endl;
                    cout << "NM" << ":" << " " << length / 1852 << endl;
                    cout << "YD" << ":" << " " << length / 3 << endl;
                }
                else if (convert == "FUR")
                {
                    input_length();

                    newline();
                    cout << "ANG" << ":" << " " << length * 201168000 << endl;
                    cout << "M" << ":" << " " << length / 201.168 << endl;
                    cout << "KM" << ":" << " " << length / 201168 << endl;
                    cout << "IN" << ":" << " " << length * 7920 << endl;
                    cout << "FT" << ":" << " " << length * 660 << endl;
                }
                else if (convert == "H")
                {
                    input_length();

                    newline();
                    cout << "ANG" << ":" << " " << length * 114300 << endl;
                    cout << "M" << ":" << " " << length / 109.361 << endl;
                    cout << "KM" << ":" << " " << length / 109361 << endl;
                    cout << "IN" << ":" << " " << length * 4494.49 << endl;
                    cout << "FT" << ":" << " " << length * 374.54 << endl;
                }
                else if (convert == "IN")
                {
                    input_length();

                    newline();
                    cout << "ANG" << ":" << " " << length * 25400 << endl;
                    cout << "CM" << ":" << " " << length * 2.54 << endl;
                    cout << "DM" << ":" << " " << length * 0.254 << endl;
                    cout << "M" << ":" << " " << length / 39.37 << endl;
                    cout << "KM" << ":" << " " << length / 39370 << endl;
                    cout << "FT" << ":" << " " << length / 12 << endl;
                    cout << "MI" << ":" << " " << length / 63360 << endl;
                    cout << "MM" << ":" << " " << length * 25.4 << endl;
                    cout << "NM" << ":" << " " << length / 185200 << endl;
                    cout << "YD" << ":" << " " << length / 36 << endl;
                }
                else if (convert == "KM")
                {
                    input_length();

                    newline();
                    cout << "ANG" << ":" << " " << length * 1000000000 << endl;
                    cout << "CM" << ":" << " " << length * 100000 << endl;
                    cout << "DM" << ":" << " " << length * 10000 << endl;
                    cout << "M" << ":" << " " << length * 1000 << endl;
                    cout << "IN" << ":" << " " << length * 39370.1 << endl;
                    cout << "FT" << ":" << " " << length * 3280.84 << endl;
                    cout << "MI" << ":" << " " << length / 1.609 << endl;
                    cout << "MM" << ":" << " " << length * 1000000 << endl;
                    cout << "NM" << ":" << " " << length / 1.852 << endl;
                    cout << "YD" << ":" << " " << length * 1093.61 << endl;
                }
                else if (convert == "LINK")
                {
                    input_length();

                    newline();
                    cout << "ANG" << ":" << " " << length * 2011680 << endl;
                    cout << "M" << ":" << " " << length / 4.972 << endl;
                    cout << "KM" << ":" << " " << length / 4972 << endl;
                    cout << "IN" << ":" << " " << length * 7.92 << endl;
                    cout << "FT" << ":" << " " << length * 0.66 << endl;
                }
                else if (convert == "M")
                {
                    input_length();

                    newline();
                    cout << "ANG" << ":" << " " << length * 10000000000 << endl;
                    cout << "CM" << ":" << " " << length * 100 << endl;
                    cout << "DM" << ":" << " " << length * 10 << endl;
                    cout << "KM" << ":" << " " << length / 1000 << endl;
                    cout << "IN" << ":" << " " << length * 39.37 << endl;
                    cout << "FT" << ":" << " " << length * 3.281 << endl;
                    cout << "MI" << ":" << " " << length / 1609.34 << endl;
                    cout << "MM" << ":" << " " << length * 1000 << endl;
                    cout << "NM" << ":" << " " << length / 1852 << endl;
                    cout << "YD" << ":" << " " << length * 1.094 << endl;
                }
                else if (convert == "MI")
                {
                    input_length();

                    newline();
                    cout << "ANG" << ":" << " " << length * 16093440000 << endl;
                    cout << "M" << ":" << " " << length * 1609.34 << endl;
                    cout << "KM" << ":" << " " << length * 1.609 << endl;
                    cout << "IN" << ":" << " " << length * 63360 << endl;
                    cout << "FT" << ":" << " " << length * 5280 << endl;
                }
                else if (convert == "MM")
                {
                    input_length();

                    newline();
                    cout << "ANG" << ":" << " " << length * 10000000 << endl;
                    cout << "CM" << ":" << " " << length / 10 << endl;
                    cout << "DM" << ":" << " " << length / 100 << endl;
                    cout << "M" << ":" << " " << length / 1000 << endl;
                    cout << "IN" << ":" << " " << length / 25.4 << endl;
                    cout << "FT" << ":" << " " << length / 304.8 << endl;
                    cout << "FUR" << ":" << " " << length / 2011680000 << endl;
                    cout << "CH" << ":" << " " << length / 20116800 << endl;
                    cout << "LINK" << ":" << " " << length / 2011680 << endl;
                    cout << "ROD" << ":" << " " << length / 8046720 << endl;
                    cout << "FATH" << ":" << " " << length / 18288000 << endl;
                    cout << "PER" << ":" << " " << length / 201168000 << endl;
                    cout << "POLE" << ":" << " " << length / 5029200 << endl;
                    cout << "H" << ":" << " " << length / 1143000 << endl;
                    cout << "THOU" << ":" << " " << length / 25.4 << endl;
                    cout << "YD" << ":" << " " << length / 914.4 << endl;
                }
                else if (convert == "NM")
                {
                    input_length();

                    newline();
                    cout << "ANG" << ":" << " " << length * 185200000 << endl;
                    cout << "FT" << ":" << " " << length * 6076.12 << endl;
                    cout << "KM" << ":" << " " << length * 1.852 << endl;
                    cout << "IN" << ":" << " " << length * 72913.4 << endl;
                    cout << "M" << ":" << " " << length / 1852 << endl;
                    cout << "MI" << ":" << " " << length / 1.151 << endl;
                    cout << "MM" << ":" << " " << length * 1852000 << endl;
                    cout << "YD" << ":" << " " << length * 2025.37 << endl;
                }
                else if (convert == "PER")
                {
                    input_length();

                    newline();
                    cout << "ANG" << ":" << " " << length * 20116800 << endl;
                    cout << "M" << ":" << " " << length / 5.0292 << endl;
                    cout << "KM" << ":" << " " << length / 5029.2 << endl;
                    cout << "IN" << ":" << " " << length * 19.8 << endl;
                    cout << "FT" << ":" << " " << length * 1.65 << endl;
                }
                else if (convert == "POLE")
                {
                    input_length();

                    newline();
                    cout << "ANG" << ":" << " " << length * 502920 << endl;
                    cout << "M" << ":" << " " << length / 0.19884 << endl;
                    cout << "KM" << ":" << " " << length / 198.84 << endl;
                    cout << "IN" << ":" << " " << length * 792 << endl;
                    cout << "FT" << ":" << " " << length * 66 << endl;
                }
                else if (convert == "ROD")
                {
                    input_length();

                    newline();
                    cout << "ANG" << ":" << " " << length * 8046720 << endl;
                    cout << "M" << ":" << " " << length / 3.048 << endl;
                    cout << "KM" << ":" << " " << length / 304.8 << endl;
                    cout << "IN" << ":" << " " << length * 198 << endl;
                    cout << "FT" << ":" << " " << length * 16.5 << endl;
                }
                else if (convert == "YD")
                {
                    input_length();

                    newline();
                    cout << "ANG" << ":" << " " << length * 9144000 << endl;
                    cout << "CM" << ":" << " " << length * 91.44 << endl;
                    cout << "DM" << ":" << " " << length * 9.144 << endl;
                    cout << "M" << ":" << " " << length / 1.094 << endl;
                    cout << "IN" << ":" << " " << length * 36 << endl;
                    cout << "FT" << ":" << " " << length * 3 << endl;
                    cout << "MI" << ":" << " " << length / 1760 << endl;
                    cout << "MM" << ":" << " " << length * 914.4 << endl;
                    cout << "NM" << ":" << " " << length / 2025.37 << endl;
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
