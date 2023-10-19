#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

double temperature;
double weight;
double length;
double time;
string unit_select;
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
    cin >> temperature;
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

void input_time()
{
    cout << "Enter time" << ":" << " ";
    cin >> time;
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

    vector<string> time_units =
    {
        "(S) Second",
        "(MS) Millisecond",
        "(US) Microsecond",
        "(NS) Nanosecond",
        "(PS) Picosecond",
        "(MIN) Minute",
        "(HR) Hour",
        "(DAY) Day",
        "(WK) Week",
        "(MON) Month",
        "(YR) Year",
        "(DEC) Decade",
        "(CEN) Century",
        "(MIL) Millenium"
    };

    do {
        cout << "\n" << endl;
        cout << "(T)" << " " << "Temperature" << "\n" << endl;
        cout << "(W)" << " " << "Weight" << "\n" << endl;
        cout << "(L)" << " " << "Length" << "\n" << endl;
        cout << "(TI)" << " " << "Time" << "\n" << endl;
        
        cout << "Select unit" << ":" << " ";
        cin >> unit_select;

        std::transform(unit_select.begin(), unit_select.end(), unit_select.begin(), ::toupper);

        if (unit_select == "T" || unit_select == "W" || unit_select == "L")
        {
            if (unit_select == "T")
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

                    cout << "Fahrenheit" << ":" << " " << ((temperature * 9) / 5) + 32 << endl;
                    cout << "Kelvin" << ":" << " " << temperature + 273.15 << endl;
                    
                }
                else if (convert == "F")
                {
                    input_temperature();

                    newline();

                    cout << "Celcius" << ":" << " " << ((temperature - 32) * 5) / 9 << endl;
                    cout << "Kelvin" << ":" << " " << temperature + 459.67 << endl;
                }
                else if (convert == "K")
                {
                    input_temperature();

                    newline();

                    cout << "Celcius" << ":" << " " << (temperature - 273.15) << endl;
                    cout << "Fahrenheit" << ":" << " " << ((temperature - 273.15) * 9) / 5 + 32 << endl;
                }
            }
            else if (unit_select == "W")
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
                else if (convert == "DAG")
                {
                    input_weight();

                    newline();

                    cout << "Milligram" << ":" << " " << weight * 10000 << endl;
                    cout << "Centigram" << ":" << " " << weight * 1000 << endl;
                    cout << "Decigram" << ":" << " " << weight * 100 << endl;
                    cout << "Gram" << ":" << " " << weight * 10 << endl;
                    cout << "Hectogram" << ":" << " " << weight * 0.1 << endl;
                    cout << "Kilogram" << ":" << " " << weight * 0.01 << endl;
                    cout << "Metric Ton" << ":" << " " << weight * 1e-5 << endl;
                    cout << "Grain" << ":" << " " << weight * 154.323584 << endl;
                    cout << "Dram" << ":" << " " << weight * 5.64383391 << endl;
                    cout << "Ounce" << ":" << " " << weight * 0.352739619 << endl;
                    cout << "Pound" << ":" << " " << weight * 0.0220462262 << endl;
                    cout << "Short Hundredweight" << ":" << " " << weight * 0.00220462262 << endl;
                    cout << "Long Hundredweight" << ":" << " " << weight * 0.00196841306 << endl;
                    cout << "Short Ton" << ":" << " " << weight * 1.10231131e-5 << endl;
                    cout << "Long Ton" << ":" << " " << weight * 9.84206528e-6 << endl;
                    cout << "Apothecaries' Scruple" << ":" << " " << weight * 0.0771617917 << endl;
                    cout << "Pennyweight" << ":" << " " << weight * 1.54323584 << endl;
                    cout << "Apothecaries' Dram" << ":" << " " << weight * 5.64383391 << endl;
                    cout << "Apothecaries' Ounce" << ":" << " " << weight * 0.352739619 << endl;
                    cout << "Troy or Apothecaries' Pound" << ":" << " " << weight * 0.0220462262 << endl;
                }
                else if (convert == "HG")
                {
                    input_weight();

                    newline();

                    cout << "Milligram" << ":" << " " << weight * 100000 << endl;
                    cout << "Centigram" << ":" << " " << weight * 10000 << endl;
                    cout << "Decigram" << ":" << " " << weight * 1000 << endl;
                    cout << "Gram" << ":" << " " << weight * 100 << endl;
                    cout << "Dekagram" << ":" << " " << weight * 10 << endl;
                    cout << "Kilogram" << ":" << " " << weight * 0.1 << endl;
                    cout << "Metric Ton" << ":" << " " << weight * 0.0001 << endl;
                    cout << "Grain" << ":" << " " << weight * 1543.23584 << endl;
                    cout << "Dram" << ":" << " " << weight * 56.4383391 << endl;
                    cout << "Ounce" << ":" << " " << weight * 3.52739619 << endl;
                    cout << "Pound" << ":" << " " << weight * 0.220462262 << endl;
                    cout << "Short Hundredweight" << ":" << " " << weight * 0.0220462262 << endl;
                    cout << "Long Hundredweight" << ":" << " " << weight * 0.0196841306 << endl;
                    cout << "Short Ton" << ":" << " " << weight * 0.000110231131 << endl;
                    cout << "Long Ton" << ":" << " " << weight * 9.84206528e-5 << endl;
                    cout << "Apothecaries' Scruple" << ":" << " " << weight * 0.771617917 << endl;
                    cout << "Pennyweight" << ":" << " " << weight * 15.4323584 << endl;
                    cout << "Apothecaries' Dram" << ":" << " " << weight * 56.4383391 << endl;
                    cout << "Apothecaries' Ounce" << ":" << " " << weight * 3.52739619 << endl;
                    cout << "Troy or Apothecaries' Pound" << ":" << " " << weight * 0.220462262 << endl;
                }
                else if (convert == "KG")
                {
                    input_weight();

                    newline();

                    cout << "Milligram" << ":" << " " << weight * 1000000 << endl;
                    cout << "Centigram" << ":" << " " << weight * 100000 << endl;
                    cout << "Decigram" << ":" << " " << weight * 10000 << endl;
                    cout << "Gram" << ":" << " " << weight * 1000 << endl;
                    cout << "Dekagram" << ":" << " " << weight * 100 << endl;
                    cout << "Hectogram" << ":" << " " << weight * 10 << endl;
                    cout << "Metric Ton" << ":" << " " << weight * 0.001 << endl;
                    cout << "Grain" << ":" << " " << weight * 15432.3584 << endl;
                    cout << "Dram" << ":" << " " << weight * 564.383391 << endl;
                    cout << "Ounce" << ":" << " " << weight * 35.2739619 << endl;
                    cout << "Pound" << ":" << " " << weight * 2.20462262 << endl;
                    cout << "Short Hundredweight" << ":" << " " << weight * 0.220462262 << endl;
                    cout << "Long Hundredweight" << ":" << " " << weight * 0.196841306 << endl;
                    cout << "Short Ton" << ":" << " " << weight * 0.00110231131 << endl;
                    cout << "Long Ton" << ":" << " " << weight * 0.000984206528 << endl;
                    cout << "Apothecaries' Scruple" << ":" << " " << weight * 7.71617917 << endl;
                    cout << "Pennyweight" << ":" << " " << weight * 154.323584 << endl;
                    cout << "Apothecaries' Dram" << ":" << " " << weight * 564.383391 << endl;
                    cout << "Apothecaries' Ounce" << ":" << " " << weight * 35.2739619 << endl;
                    cout << "Troy or Apothecaries' Pound" << ":" << " " << weight * 2.20462262 << endl;
                }
                else if (convert == "MT")
                {
                    input_weight();

                    newline();

                    cout << "Milligram" << ":" << " " << weight * 1000000000 << endl;
                    cout << "Centigram" << ":" << " " << weight * 100000000 << endl;
                    cout << "Decigram" << ":" << " " << weight * 10000000 << endl;
                    cout << "Gram" << ":" << " " << weight * 1000000 << endl;
                    cout << "Dekagram" << ":" << " " << weight * 100000 << endl;
                    cout << "Hectogram" << ":" << " " << weight * 10000 << endl;
                    cout << "Kilogram" << ":" << " " << weight * 1000 << endl;
                    cout << "Grain" << ":" << " " << weight * 15432358.4 << endl;
                    cout << "Dram" << ":" << " " << weight * 564383.391 << endl;
                    cout << "Ounce" << ":" << " " << weight * 35273.9619 << endl;
                    cout << "Pound" << ":" << " " << weight * 2204.62262 << endl;
                    cout << "Short Hundredweight" << ":" << " " << weight * 220.462262 << endl;
                    cout << "Long Hundredweight" << ":" << " " << weight * 196.841306 << endl;
                    cout << "Short Ton" << ":" << " " << weight * 1.10231131 << endl;
                    cout << "Long Ton" << ":" << " " << weight * 0.984206528 << endl;
                    cout << "Apothecaries' Scruple" << ":" << " " << weight * 7716.17917 << endl;
                    cout << "Pennyweight" << ":" << " " << weight * 154323.584 << endl;
                    cout << "Apothecaries' Dram" << ":" << " " << weight * 564383.391 << endl;
                    cout << "Apothecaries' Ounce" << ":" << " " << weight * 35273.9619 << endl;
                    cout << "Troy or Apothecaries' Pound" << ":" << " " << weight * 2204.62262 << endl;
                }
                else if (convert == "GR")
                {
                    input_weight();

                    newline();

                    cout << "Milligram" << ":" << " " << weight * 64.79891 << endl;
                    cout << "Centigram" << ":" << " " << weight * 6.479891 << endl;
                    cout << "Decigram" << ":" << " " << weight * 0.6479891 << endl;
                    cout << "Gram" << ":" << " " << weight * 0.06479891 << endl;
                    cout << "Dekagram" << ":" << " " << weight * 0.006479891 << endl;
                    cout << "Hectogram" << ":" << " " << weight * 0.0006479891 << endl;
                    cout << "Kilogram" << ":" << " " << weight * 0.00006479891 << endl;
                    cout << "Metric Ton" << ":" << " " << weight * 6.479891e-8 << endl;
                    cout << "Dram" << ":" << " " << weight * 0.0365714286 << endl;
                    cout << "Ounce" << ":" << " " << weight * 0.00228571429 << endl;
                    cout << "Pound" << ":" << " " << weight * 0.000142857143 << endl;
                    cout << "Short Hundredweight" << ":" << " " << weight * 1.42857143e-5 << endl;
                    cout << "Long Hundredweight" << ":" << " " << weight * 1.2755102e-5 << endl;
                    cout << "Short Ton" << ":" << " " << weight * 7.14285714e-8 << endl;
                    cout << "Long Ton" << ":" << " " << weight * 6.37755102e-8 << endl;
                    cout << "Apothecaries' Scruple" << ":" << " " << weight * 0.0005 << endl;
                    cout << "Pennyweight" << ":" << " " << weight * 0.01 << endl;
                    cout << "Apothecaries' Dram" << ":" << " " << weight * 0.0365714286 << endl;
                    cout << "Apothecaries' Ounce" << ":" << " " << weight * 0.00228571429 << endl;
                    cout << "Troy or Apothecaries' Pound" << ":" << " " << weight * 0.000142857143 << endl;
                }
                else if (convert == "DR")
                {
                    input_weight();

                    newline();

                    cout << "Milligram" << ":" << " " << weight * 1771.8452 << endl;
                    cout << "Centigram" << ":" << " " << weight * 177.18452 << endl;
                    cout << "Decigram" << ":" << " " << weight * 17.718452 << endl;
                    cout << "Gram" << ":" << " " << weight * 1.7718452 << endl;
                    cout << "Dekagram" << ":" << " " << weight * 0.17718452 << endl;
                    cout << "Hectogram" << ":" << " " << weight * 0.017718452 << endl;
                    cout << "Kilogram" << ":" << " " << weight * 0.0017718452 << endl;
                    cout << "Metric Ton" << ":" << " " << weight * 1.7718452e-6 << endl;
                    cout << "Grain" << ":" << " " << weight * 27.34375 << endl;
                    cout << "Ounce" << ":" << " " << weight * 0.0625 << endl;
                    cout << "Pound" << ":" << " " << weight * 0.00390625 << endl;
                    cout << "Short Hundredweight" << ":" << " " << weight * 0.000390625 << endl;
                    cout << "Long Hundredweight" << ":" << " " << weight * 0.000347222222 << endl;
                    cout << "Short Ton" << ":" << " " << weight * 1.953125e-6 << endl;
                    cout << "Long Ton" << ":" << " " << weight * 1.73611111e-6 << endl;
                    cout << "Apothecaries' Scruple" << ":" << " " << weight * 0.013671875 << endl;
                    cout << "Pennyweight" << ":" << " " << weight * 0.2734375 << endl;
                    cout << "Apothecaries' Dram" << ":" << " " << weight * 1.7718452 << endl;
                    cout << "Apothecaries' Ounce" << ":" << " " << weight * 0.0625 << endl;
                    cout << "Troy or Apothecaries' Pound" << ":" << " " << weight * 0.00390625 << endl;
                }
                else if (convert == "OZ")
                {
                    input_weight();

                    newline();

                    cout << "Milligram" << ":" << " " << weight * 28349.5231 << endl;
                    cout << "Centigram" << ":" << " " << weight * 2834.95231 << endl;
                    cout << "Decigram" << ":" << " " << weight * 283.495231 << endl;
                    cout << "Gram" << ":" << " " << weight * 28.3495231 << endl;
                    cout << "Dekagram" << ":" << " " << weight * 2.83495231 << endl;
                    cout << "Hectogram" << ":" << " " << weight * 0.283495231 << endl;
                    cout << "Kilogram" << ":" << " " << weight * 0.0283495231 << endl;
                    cout << "Metric Ton" << ":" << " " << weight * 2.83495231e-5 << endl;
                    cout << "Grain" << ":" << " " << weight * 437.5 << endl;
                    cout << "Dram" << ":" << " " << weight * 16 << endl;
                    cout << "Pound" << ":" << " " << weight * 0.0625 << endl;
                    cout << "Short Hundredweight" << ":" << " " << weight * 0.00625 << endl;
                    cout << "Long Hundredweight" << ":" << " " << weight * 0.00555555556 << endl;
                    cout << "Short Ton" << ":" << " " << weight * 3.125e-5 << endl;
                    cout << "Long Ton" << ":" << " " << weight * 2.77777778e-5 << endl;
                    cout << "Apothecaries' Scruple" << ":" << " " << weight * 0.21875 << endl;
                    cout << "Pennyweight" << ":" << " " << weight * 4.375 << endl;
                    cout << "Apothecaries' Dram" << ":" << " " << weight * 16 << endl;
                    cout << "Apothecaries' Ounce" << ":" << " " << weight * 0.0625 << endl;
                    cout << "Troy or Apothecaries' Pound" << ":" << " " << weight * 0.00390625 << endl;
                }
                else if (convert == "LB")
                {
                    input_weight();

                    newline();

                    cout << "Milligram" << ":" << " " << weight * 453592.37 << endl;
                    cout << "Centigram" << ":" << " " << weight * 45359.237 << endl;
                    cout << "Decigram" << ":" << " " << weight * 4535.9237 << endl;
                    cout << "Gram" << ":" << " " << weight * 453.59237 << endl;
                    cout << "Dekagram" << ":" << " " << weight * 45.359237 << endl;
                    cout << "Hectogram" << ":" << " " << weight * 4.5359237 << endl;
                    cout << "Kilogram" << ":" << " " << weight * 0.45359237 << endl;
                    cout << "Metric Ton" << ":" << " " << weight * 0.00045359237 << endl;
                    cout << "Grain" << ":" << " " << weight * 7000 << endl;
                    cout << "Dram" << ":" << " " << weight * 256 << endl;
                    cout << "Ounce" << ":" << " " << weight * 16 << endl;
                    cout << "Short Hundredweight" << ":" << " " << weight * 0.16 << endl;
                    cout << "Long Hundredweight" << ":" << " " << weight * 0.142857143 << endl;
                    cout << "Short Ton" << ":" << " " << weight * 0.0008 << endl;
                    cout << "Long Ton" << ":" << " " << weight * 0.000714285714 << endl;
                    cout << "Apothecaries' Scruple" << ":" << " " << weight * 5.6 << endl;
                    cout << "Pennyweight" << ":" << " " << weight * 112 << endl;
                    cout << "Apothecaries' Dram" << ":" << " " << weight * 256 << endl;
                    cout << "Apothecaries' Ounce" << ":" << " " << weight * 16 << endl;
                    cout << "Troy or Apothecaries' Pound" << ":" << " " << weight * 1 << endl;
                }
                else if (convert == "SHCWT")
                {
                    input_weight();

                    newline();

                    cout << "Milligram" << ":" << " " << weight * 4535923.7 << endl;
                    cout << "Centigram" << ":" << " " << weight * 453592.37 << endl;
                    cout << "Decigram" << ":" << " " << weight * 45359.237 << endl;
                    cout << "Gram" << ":" << " " << weight * 4535.9237 << endl;
                    cout << "Dekagram" << ":" << " " << weight * 453.59237 << endl;
                    cout << "Hectogram" << ":" << " " << weight * 45.359237 << endl;
                    cout << "Kilogram" << ":" << " " << weight * 4.5359237 << endl;
                    cout << "Metric Ton" << ":" << " " << weight * 0.0045359237 << endl;
                    cout << "Grain" << ":" << " " << weight * 70000 << endl;
                    cout << "Dram" << ":" << " " << weight * 2560 << endl;
                    cout << "Ounce" << ":" << " " << weight * 160 << endl;
                    cout << "Pound" << ":" << " " << weight * 10 << endl;
                    cout << "Long Hundredweight" << ":" << " " << weight * 0.892857143 << endl;
                    cout << "Short Ton" << ":" << " " << weight * 0.005 << endl;
                    cout << "Long Ton" << ":" << " " << weight * 0.00446428571 << endl;
                    cout << "Apothecaries' Scruple" << ":" << " " << weight * 35 << endl;
                    cout << "Pennyweight" << ":" << " " << weight * 700 << endl;
                    cout << "Apothecaries' Dram" << ":" << " " << weight * 2560 << endl;
                    cout << "Apothecaries' Ounce" << ":" << " " << weight * 160 << endl;
                    cout << "Troy or Apothecaries' Pound" << ":" << " " << weight * 10 << endl;
                }
                else if (convert == "LHCWT")
                {
                    input_weight();

                    newline();

                    cout << "Milligram" << ":" << " " << weight * 5080234.54 << endl;
                    cout << "Centigram" << ":" << " " << weight * 508023.454 << endl;
                    cout << "Decigram" << ":" << " " << weight * 50802.3454 << endl;
                    cout << "Gram" << ":" << " " << weight * 5080.23454 << endl;
                    cout << "Dekagram" << ":" << " " << weight * 508.023454 << endl;
                    cout << "Hectogram" << ":" << " " << weight * 50.8023454 << endl;
                    cout << "Kilogram" << ":" << " " << weight * 5.08023454 << endl;
                    cout << "Metric Ton" << ":" << " " << weight * 0.00508023454 << endl;
                    cout << "Grain" << ":" << " " << weight * 78400 << endl;
                    cout << "Dram" << ":" << " " << weight * 2864 << endl;
                    cout << "Ounce" << ":" << " " << weight * 179 << endl;
                    cout << "Pound" << ":" << " " << weight * 11.25 << endl;
                    cout << "Short Hundredweight" << ":" << " " << weight * 1.12 << endl;
                    cout << "Short Ton" << ":" << " " << weight * 0.0056 << endl;
                    cout << "Long Ton" << ":" << " " << weight * 0.00892857143 << endl;
                    cout << "Apothecaries' Scruple" << ":" << " " << weight * 39.2 << endl;
                    cout << "Pennyweight" << ":" << " " << weight * 784 << endl;
                    cout << "Apothecaries' Dram" << ":" << " " << weight * 2864 << endl;
                    cout << "Apothecaries' Ounce" << ":" << " " << weight * 179 << endl;
                    cout << "Troy or Apothecaries' Pound" << ":" << " " << weight * 11.25 << endl;
                }
                else if (convert == "ST")
                {
                    input_weight();

                    newline();

                    cout << "Milligram" << ":" << " " << weight * 90718474 << endl;
                    cout << "Centigram" << ":" << " " << weight * 9071847.4 << endl;
                    cout << "Decigram" << ":" << " " << weight * 907184.74 << endl;
                    cout << "Gram" << ":" << " " << weight * 90718.474 << endl;
                    cout << "Dekagram" << ":" << " " << weight * 9071.8474 << endl;
                    cout << "Hectogram" << ":" << " " << weight * 907.18474 << endl;
                    cout << "Kilogram" << ":" << " " << weight * 90.718474 << endl;
                    cout << "Metric Ton" << ":" << " " << weight * 0.090718474 << endl;
                    cout << "Grain" << ":" << " " << weight * 1400000 << endl;
                    cout << "Dram" << ":" << " " << weight * 51200 << endl;
                    cout << "Ounce" << ":" << " " << weight * 3200 << endl;
                    cout << "Pound" << ":" << " " << weight * 200 << endl;
                    cout << "Short Hundredweight" << ":" << " " << weight * 20 << endl;
                    cout << "Long Hundredweight" << ":" << " " << weight * 17.8571429 << endl;
                    cout << "Long Ton" << ":" << " " << weight * 0.0178571429 << endl;
                    cout << "Apothecaries' Scruple" << ":" << " " << weight * 140 << endl;
                    cout << "Pennyweight" << ":" << " " << weight * 2800 << endl;
                    cout << "Apothecaries' Dram" << ":" << " " << weight * 51200 << endl;
                    cout << "Apothecaries' Ounce" << ":" << " " << weight * 3200 << endl;
                    cout << "Troy or Apothecaries' Pound" << ":" << " " << weight * 200 << endl;
                }
                else if (convert == "LT")
                {
                    input_weight();

                    newline();

                    cout << "Milligram" << ":" << " " << weight * 101604690 << endl;
                    cout << "Centigram" << ":" << " " << weight * 10160469 << endl;
                    cout << "Decigram" << ":" << " " << weight * 1016046.9 << endl;
                    cout << "Gram" << ":" << " " << weight * 101604.69 << endl;
                    cout << "Dekagram" << ":" << " " << weight * 10160.469 << endl;
                    cout << "Hectogram" << ":" << " " << weight * 1016.0469 << endl;
                    cout << "Kilogram" << ":" << " " << weight * 101.60469 << endl;
                    cout << "Metric Ton" << ":" << " " << weight * 0.10160469 << endl;
                    cout << "Grain" << ":" << " " << weight * 1568000 << endl;
                    cout << "Dram" << ":" << " " << weight * 57344 << endl;
                    cout << "Ounce" << ":" << " " << weight * 3584 << endl;
                    cout << "Pound" << ":" << " " << weight * 224 << endl;
                    cout << "Short Hundredweight" << ":" << " " << weight * 22.4 << endl;
                    cout << "Long Hundredweight" << ":" << " " << weight * 20 << endl;
                    cout << "Short Ton" << ":" << " " << weight * 0.0112 << endl;
                    cout << "Apothecaries' Scruple" << ":" << " " << weight * 156.8 << endl;
                    cout << "Pennyweight" << ":" << " " << weight * 3136 << endl;
                    cout << "Apothecaries' Dram" << ":" << " " << weight * 57344 << endl;
                    cout << "Apothecaries' Ounce" << ":" << " " << weight * 3584 << endl;
                    cout << "Troy or Apothecaries' Pound" << ":" << " " << weight * 224 << endl;
                }
                else if (convert == "APSCR")
                {
                    input_weight();

                    newline();

                    cout << "Milligram" << ":" << " " << weight * 64.79891 << endl;
                    cout << "Centigram" << ":" << " " << weight * 6.479891 << endl;
                    cout << "Decigram" << ":" << " " << weight * 0.6479891 << endl;
                    cout << "Gram" << ":" << " " << weight * 0.06479891 << endl;
                    cout << "Dekagram" << ":" << " " << weight * 0.006479891 << endl;
                    cout << "Hectogram" << ":" << " " << weight * 0.0006479891 << endl;
                    cout << "Kilogram" << ":" << " " << weight * 0.00006479891 << endl;
                    cout << "Metric Ton" << ":" << " " << weight * 6.479891e-8 << endl;
                    cout << "Grain" << ":" << " " << weight * 1 << endl;
                    cout << "Dram" << ":" << " " << weight * 0.0365714286 << endl;
                    cout << "Ounce" << ":" << " " << weight * 0.00228571429 << endl;
                    cout << "Pound" << ":" << " " << weight * 0.000142857143 << endl;
                    cout << "Short Hundredweight" << ":" << " " << weight * 1.42857143e-5 << endl;
                    cout << "Long Hundredweight" << ":" << " " << weight * 1.2755102e-5 << endl;
                    cout << "Short Ton" << ":" << " " << weight * 7.14285714e-8 << endl;
                    cout << "Long Ton" << ":" << " " << weight * 6.37755102e-8 << endl;
                    cout << "Pennyweight" << ":" << " " << weight * 0.02 << endl;
                    cout << "Apothecaries' Dram" << ":" << " " << weight * 0.0365714286 << endl;
                    cout << "Apothecaries' Ounce" << ":" << " " << weight * 0.00228571429 << endl;
                    cout << "Troy or Apothecaries' Pound" << ":" << " " << weight * 0.000142857143 << endl;
                }
                else if (convert == "DWT")
                {
                    input_weight();

                    newline();

                    cout << "Milligram" << ":" << " " << weight * 1771.8452 << endl;
                    cout << "Centigram" << ":" << " " << weight * 177.18452 << endl;
                    cout << "Decigram" << ":" << " " << weight * 17.718452 << endl;
                    cout << "Gram" << ":" << " " << weight * 1.7718452 << endl;
                    cout << "Dekagram" << ":" << " " << weight * 0.17718452 << endl;
                    cout << "Hectogram" << ":" << " " << weight * 0.017718452 << endl;
                    cout << "Kilogram" << ":" << " " << weight * 0.0017718452 << endl;
                    cout << "Metric Ton" << ":" << " " << weight * 1.7718452e-6 << endl;
                    cout << "Grain" << ":" << " " << weight * 27.34375 << endl;
                    cout << "Dram" << ":" << " " << weight * 1 << endl;
                    cout << "Ounce" << ":" << " " << weight * 0.0625 << endl;
                    cout << "Pound" << ":" << " " << weight * 0.00390625 << endl;
                    cout << "Short Hundredweight" << ":" << " " << weight * 0.000390625 << endl;
                    cout << "Long Hundredweight" << ":" << " " << weight * 0.000347222222 << endl;
                    cout << "Short Ton" << ":" << " " << weight * 1.953125e-6 << endl;
                    cout << "Long Ton" << ":" << " " << weight * 1.73611111e-6 << endl;
                    cout << "Apothercaries' Dram" << ":" << " " << weight * 0.078125 << endl;
                    cout << "Apothecaries' Ounce" << ":" << " " << weight * 0.00520833333 << endl;
                    cout << "Troy or Apothecaries' Pound" << ":" << " " << weight * 0.000325 << endl;
                }
                else if (convert == "APDR")
                {
                    input_weight();

                    newline();

                    cout << "Milligram" << ":" << " " << weight * 1771.8452 << endl;
                    cout << "Centigram" << ":" << " " << weight * 177.18452 << endl;
                    cout << "Decigram" << ":" << " " << weight * 17.718452 << endl;
                    cout << "Gram" << ":" << " " << weight * 1.7718452 << endl;
                    cout << "Dekagram" << ":" << " " << weight * 0.17718452 << endl;
                    cout << "Hectogram" << ":" << " " << weight * 0.017718452 << endl;
                    cout << "Kilogram" << ":" << " " << weight * 0.0017718452 << endl;
                    cout << "Metric Ton" << ":" << " " << weight * 1.7718452e-6 << endl;
                    cout << "Grain" << ":" << " " << weight * 27.34375 << endl;
                    cout << "Dram" << ":" << " " << weight * 1 << endl;
                    cout << "Ounce" << ":" << " " << weight * 0.0625 << endl;
                    cout << "Pound" << ":" << " " << weight * 0.00390625 << endl;
                    cout << "Short Hundredweight" << ":" << " " << weight * 0.000390625 << endl;
                    cout << "Long Hundredweight" << ":" << " " << weight * 0.000347222222 << endl;
                    cout << "Short Ton" << ":" << " " << weight * 1.953125e-6 << endl;
                    cout << "Long Ton" << ":" << " " << weight * 1.73611111e-6 << endl;
                    cout << "Apothecaries' Scruple" << ":" << " " << weight * 0.078125 << endl;
                    cout << "Pennyweight" << ":" << " " << weight * 1.5625 << endl;
                    cout << "Apothecaries' Ounce" << ":" << " " << weight * 0.0625 << endl;
                    cout << "Troy or Apothecaries' Pound" << ":" << " " << weight * 0.00390625 << endl;
                }
                else if (convert == "APOZ")
                {
                    input_weight();

                    newline();

                    cout << "Milligram" << ":" << " " << weight * 28349.5231 << endl;
                    cout << "Centigram" << ":" << " " << weight * 2834.95231 << endl;
                    cout << "Decigram" << ":" << " " << weight * 283.495231 << endl;
                    cout << "Gram" << ":" << " " << weight * 28.3495231 << endl;
                    cout << "Dekagram" << ":" << " " << weight * 2.83495231 << endl;
                    cout << "Hectogram" << ":" << " " << weight * 0.283495231 << endl;
                    cout << "Kilogram" << ":" << " " << weight * 0.0283495231 << endl;
                    cout << "Metric Ton" << ":" << " " << weight * 2.83495231e-5 << endl;
                    cout << "Grain" << ":" << " " << weight * 437.5 << endl;
                    cout << "Dram" << ":" << " " << weight * 16 << endl;
                    cout << "Ounce" << ":" << " " << weight * 1 << endl;
                    cout << "Pound" << ":" << " " << weight * 0.0625 << endl;
                    cout << "Short Hundredweight" << ":" << " " << weight * 0.00625 << endl;
                    cout << "Long Hundredweight" << ":" << " " << weight * 0.00555555556 << endl;
                    cout << "Short Ton" << ":" << " " << weight * 3.125e-5 << endl;
                    cout << "Long Ton" << ":" << " " << weight * 2.77777778e-5 << endl;
                    cout << "Apothecaries' Scruple" << ":" << " " << weight * 0.21875 << endl;
                    cout << "Pennyweight" << ":" << " " << weight * 4.375 << endl;
                    cout << "Apothecaries' Dram" << ":" << " " << weight * 16 << endl;
                    cout << "Troy or Apothecaries' Pound" << ":" << " " << weight * 1 << endl;
                }
                else if (convert == "TPLB")
                {
                    input_weight();

                    newline();

                    cout << "Milligram" << ":" << " " << weight * 453592.37 << endl;
                    cout << "Centigram" << ":" << " " << weight * 45359.237 << endl;
                    cout << "Decigram" << ":" << " " << weight * 4535.9237 << endl;
                    cout << "Gram" << ":" << " " << weight * 453.59237 << endl;
                    cout << "Dekagram" << ":" << " " << weight * 45.359237 << endl;
                    cout << "Hectogram" << ":" << " " << weight * 4.5359237 << endl;
                    cout << "Kilogram" << ":" << " " << weight * 0.45359237 << endl;
                    cout << "Metric Ton" << ":" << " " << weight * 0.00045359237 << endl;
                    cout << "Grain" << ":" << " " << weight * 7000 << endl;
                    cout << "Dram" << ":" << " " << weight * 256 << endl;
                    cout << "Ounce" << ":" << " " << weight * 16 << endl;
                    cout << "Pound" << ":" << " " << weight * 1 << endl;
                    cout << "Short Hundredweight" << ":" << " " << weight * 0.1 << endl;
                    cout << "Long Hundredweight" << ":" << " " << weight * 0.0892857143 << endl;
                    cout << "Short Ton" << ":" << " " << weight * 0.0005 << endl;
                    cout << "Long Ton" << ":" << " " << weight * 0.000446428571 << endl;
                    cout << "Apothecaries' Scruple" << ":" << " " << weight * 3.5 << endl;
                    cout << "Pennyweight" << ":" << " " << weight * 70 << endl;
                    cout << "Apothecaries' Dram" << ":" << " " << weight * 256 << endl;
                    cout << "Apothecaries' Ounce" << ":" << " " << weight * 16 << endl;
                }
            }
            else if (unit_select == "L")
            {
                for (auto& length_list : length_units)
                {
                    cout << "\n" << length_list << "\n" << endl;
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
            else if (unit_select == "TI")
            {
                for (auto& time_list : time_units)
                {
                    cout << "\n" << time_list << "\n" << endl;
                }

                input_unit_convert();

                if (convert == "S")
                {
                    input_time();

                    newline();

                    cout << "Milisecond" << ":" << " " << time * 1000 << endl;
                    cout << "Microsecond" << ":" << " " << time * 1000000 << endl;
                    cout << "Nanosecond" << ":" << " " << time * 1000000000 << endl;
                    cout << "Picosecond" << ":" << " " << time * 1000000000000 << endl;
                    cout << "Minute" << ":" << " " << time * 0.0166666667 << endl;
                    cout << "Hour" << ":" << " " << time * 0.000277777778 << endl;
                    cout << "Day" << ":" << " " << time * 0.0000115740741 << endl;
                    cout << "Week" << ":" << " " << time * 0.00000165343915 << endl;
                    cout << "Month" << ":" << " " << time * 3.802570537e-7 << endl;
                    cout << "Year" << ":" << " " << time * 3.16880878e-8 << endl;
                    cout << "Decade" << ":" << " " << time * 3.16880878e-9 << endl;
                    cout << "Century" << ":" << " " << time * 3.16880878e-10 << endl;
                    cout << "Millenium" << ":" << " " << time * 3.16880878e-11 << endl;
                }
                else if (convert == "MS")
                {
                    input_time();

                    newline();

                    cout << "Second" << ":" << " " << time * 0.001 << endl;
                    cout << "Microsecond" << ":" << " " << time * 1000 << endl;
                    cout << "Nanosecond" << ":" << " " << time * 1000000 << endl;
                    cout << "Picosecond" << ":" << " " << time * 1000000000 << endl;
                    cout << "Minute" << ":" << " " << time * 0.0000166666667 << endl;
                    cout << "Hour" << ":" << " " << time * 0.000000277777778 << endl;
                    cout << "Day" << ":" << " " << time * 0.0000000115740741 << endl;
                    cout << "Week" << ":" << " " << time * 0.00000000165343915 << endl;
                    cout << "Month" << ":" << " " << time * 3.802570537e-10 << endl;
                    cout << "Year" << ":" << " " << time * 3.16880878e-11 << endl;
                    cout << "Decade" << ":" << " " << time * 3.16880878e-12 << endl;
                    cout << "Century" << ":" << " " << time * 3.16880878e-13 << endl;
                    cout << "Millenium" << ":" << " " << time * 3.16880878e-14 << endl;
                }
                else if (convert == "US")
                {
                    input_time();

                    newline();

                    cout << "Second" << ":" << " " << time * 0.000001 << endl;
                    cout << "Milisecond" << ":" << " " << time * 0.001 << endl;
                    cout << "Nanosecond" << ":" << " " << time * 1000 << endl;
                    cout << "Picosecond" << ":" << " " << time * 1000000 << endl;
                    cout << "Minute" << ":" << " " << time * 0.0000000166666667 << endl;
                    cout << "Hour" << ":" << " " << time * 2.77777778e-10 << endl;
                    cout << "Day" << ":" << " " << time * 1.15740741e-11 << endl;
                    cout << "Week" << ":" << " " << time * 1.65343915e-12 << endl;
                    cout << "Month" << ":" << " " << time * 3.80257054e-13 << endl;
                    cout << "Year" << ":" << " " << time * 3.16880878e-14 << endl;
                    cout << "Decade" << ":" << " " << time * 3.16880878e-15 << endl;
                    cout << "Century" << ":" << " " << time * 3.16880878e-16 << endl;
                    cout << "Millenium" << ":" << " " << time * 3.16880878e-17 << endl;
                }
                else if (convert == "NS")
                {
                    input_time();

                    newline();

                    cout << "Second" << ":" << " " << time * 0.000000001 << endl;
                    cout << "Milisecond" << ":" << " " << time * 0.000001 << endl;
                    cout << "Microsecond" << ":" << " " << time * 0.001 << endl;
                    cout << "Picosecond" << ":" << " " << time * 1000 << endl;
                    cout << "Minute" << ":" << " " << time * 0.0000000000166666667 << endl;
                    cout << "Hour" << ":" << " " << time * 2.77777778e-13 << endl;
                    cout << "Day" << ":" << " " << time * 1.15740741e-14 << endl;
                    cout << "Week" << ":" << " " << time * 1.65343915e-15 << endl;
                    cout << "Month" << ":" << " " << time * 3.80257054e-16 << endl;
                    cout << "Year" << ":" << " " << time * 3.16880878e-17 << endl;
                    cout << "Decade" << ":" << " " << time * 3.16880878e-18 << endl;
                    cout << "Century" << ":" << " " << time * 3.16880878e-19 << endl;
                    cout << "Millenium" << ":" << " " << time * 3.16880878e-20 << endl;
                }
                else if (convert == "PS")
                {
                    input_time();

                    newline();

                    cout << "Second" << ":" << " " << time * 0.000000000001 << endl;
                    cout << "Milisecond" << ":" << " " << time * 0.000000001 << endl;
                    cout << "Microsecond" << ":" << " " << time * 0.000001 << endl;
                    cout << "Nanosecond" << ":" << " " << time * 0.001 << endl;
                    cout << "Minute" << ":" << " " << time * 0.0000000000000166666667 << endl;
                    cout << "Hour" << ":" << " " << time * 2.77777778e-16 << endl;
                    cout << "Day" << ":" << " " << time * 1.15740741e-17 << endl;
                    cout << "Week" << ":" << " " << time * 1.65343915e-18 << endl;
                    cout << "Month" << ":" << " " << time * 3.80257054e-19 << endl;
                    cout << "Year" << ":" << " " << time * 3.16880878e-20 << endl;
                    cout << "Decade" << ":" << " " << time * 3.16880878e-21 << endl;
                    cout << "Century" << ":" << " " << time * 3.16880878e-22 << endl;
                    cout << "Millenium" << ":" << " " << time * 3.16880878e-23 << endl;
                }
                else if (convert == "MIN")
                {
                    input_time();

                    newline();

                    cout << "Second" << ":" << " " << time * 60 << endl;
                    cout << "Milisecond" << ":" << " " << time * 60000 << endl;
                    cout << "Microsecond" << ":" << " " << time * 60000000 << endl;
                    cout << "Nanosecond" << ":" << " " << time * 60000000000 << endl;
                    cout << "Picosecond" << ":" << " " << time * 60000000000000 << endl;
                    cout << "Hour" << ":" << " " << time * 0.0166666667 << endl;
                    cout << "Day" << ":" << " " << time * 0.000694444444 << endl;
                    cout << "Week" << ":" << " " << time * 0.0000992063492 << endl;
                    cout << "Month" << ":" << " " << time * 0.0000228310502 << endl;
                    cout << "Year" << ":" << " " << time * 0.00000190258752 << endl;
                    cout << "Decade" << ":" << " " << time * 0.000000190258752 << endl;
                    cout << "Century" << ":" << " " << time * 0.0000000190258752 << endl;
                    cout << "Millenium" << ":" << " " << time * 0.00000000190258752 << endl;
                }
                else if (convert == "HR")
                {
                    input_time();

                    newline();

                    cout << "Second" << ":" << " " << time * 3600 << endl;
                    cout << "Milisecond" << ":" << " " << time * 3600000 << endl;
                    cout << "Microsecond" << ":" << " " << time * 3600000000 << endl;
                    cout << "Nanosecond" << ":" << " " << time * 3600000000000 << endl;
                    cout << "Picosecond" << ":" << " " << time * 3600000000000000 << endl;
                    cout << "Minute" << ":" << " " << time * 60 << endl;
                    cout << "Day" << ":" << " " << time * 0.0416666667 << endl;
                    cout << "Week" << ":" << " " << time * 0.00595238095 << endl;
                    cout << "Month" << ":" << " " << time * 0.00136895476 << endl;
                    cout << "Year" << ":" << " " << time * 0.000114079563 << endl;
                    cout << "Decade" << ":" << " " << time * 0.0000114079563 << endl;
                    cout << "Century" << ":" << " " << time * 0.00000114079563 << endl;
                    cout << "Millenium" << ":" << " " << time * 0.000000114079563 << endl;
                }
                else if (convert == "DAY")
                {
                    input_time();

                    newline();

                    cout << "Second" << ":" << " " << time * 86400 << endl;
                    cout << "Milisecond" << ":" << " " << time * 86400000 << endl;
                    cout << "Microsecond" << ":" << " " << time * 86400000000 << endl;
                    cout << "Nanosecond" << ":" << " " << time * 86400000000000 << endl;
                    cout << "Picosecond" << ":" << " " << time * 86400000000000000 << endl;
                    cout << "Minute" << ":" << " " << time * 1440 << endl;
                    cout << "Hour" << ":" << " " << time * 24 << endl;
                    cout << "Week" << ":" << " " << time * 0.142857143 << endl;
                    cout << "Month" << ":" << " " << time * 0.0328549112 << endl;
                    cout << "Year" << ":" << " " << time * 0.00273785079 << endl;
                    cout << "Decade" << ":" << " " << time * 0.000273785079 << endl;
                    cout << "Century" << ":" << " " << time * 0.0000273785079 << endl;
                    cout << "Millenium" << ":" << " " << time * 0.00000273785079 << endl;
                }
                else if (convert == "WK")
                {
                    input_time();

                    newline();

                    cout << "Second" << ":" << " " << time * 604800 << endl;
                    cout << "Milisecond" << ":" << " " << time * 604800000 << endl;
                    cout << "Microsecond" << ":" << " " << time * 604800000000 << endl;
                    cout << "Nanosecond" << ":" << " " << time * 604800000000000 << endl;
                    cout << "Picosecond" << ":" << " " << time * 604800000000000000 << endl;
                    cout << "Minute" << ":" << " " << time * 10080 << endl;
                    cout << "Hour" << ":" << " " << time * 168 << endl;
                    cout << "Day" << ":" << " " << time * 7 << endl;
                    cout << "Month" << ":" << " " << time * 0.229979466 << endl;
                    cout << "Year" << ":" << " " << time * 0.0191649555 << endl;
                    cout << "Decade" << ":" << " " << time * 0.00191649555 << endl;
                    cout << "Century" << ":" << " " << time * 0.000191649555 << endl;
                    cout << "Millenium" << ":" << " " << time * 0.0000191649555 << endl;
                }
                else if (convert == "MON")
                {
                    input_time();

                    newline();

                    cout << "Second" << ":" << " " << time * 2628000 << endl;
                    cout << "Milisecond" << ":" << " " << time * 2628000000 << endl;
                    cout << "Microsecond" << ":" << " " << time * 2628000000000 << endl;
                    cout << "Nanosecond" << ":" << " " << time * 2628000000000000 << endl;
                    cout << "Picosecond" << ":" << " " << time * 2628000000000000000 << endl;
                    cout << "Minute" << ":" << " " << time * 43800 << endl;
                    cout << "Hour" << ":" << " " << time * 730 << endl;
                    cout << "Day" << ":" << " " << time * 30.4166667 << endl;
                    cout << "Week" << ":" << " " << time * 4.3452381 << endl;
                    cout << "Year" << ":" << " " << time * 0.0833333333 << endl;
                    cout << "Decade" << ":" << " " << time * 0.00833333333 << endl;
                    cout << "Century" << ":" << " " << time * 0.000833333333 << endl;
                    cout << "Millenium" << ":" << " " << time * 0.0000833333333 << endl;
                }
                else if (convert == "YR")
                {
                    input_time();

                    newline();

                    cout << "Second" << ":" << " " << time * 31536000 << endl;
                    cout << "Milisecond" << ":" << " " << time * 31536000000 << endl;
                    cout << "Microsecond" << ":" << " " << time * 31536000000000 << endl;
                    cout << "Nanosecond" << ":" << " " << time * 31536000000000000 << endl;
                    cout << "Picosecond" << ":" << " " << time * 31536000000000000000 << endl;
                    cout << "Minute" << ":" << " " << time * 525600 << endl;
                    cout << "Hour" << ":" << " " << time * 8760 << endl;
                    cout << "Day" << ":" << " " << time * 365 << endl;
                    cout << "Week" << ":" << " " << time * 52.1428571 << endl;
                    cout << "Month" << ":" << " " << time * 12 << endl;
                    cout << "Decade" << ":" << " " << time * 0.1 << endl;
                    cout << "Century" << ":" << " " << time * 0.01 << endl;
                    cout << "Millenium" << ":" << " " << time * 0.001 << endl;
                }
            }
        }
        else
        {
            cout << "\n" << "Invalid input" << "\n" << endl;
        }
    } while (unit_select != "Q");

    return 0;
}
