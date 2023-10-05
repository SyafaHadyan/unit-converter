#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

double temp;
double weight;
char unit_select;
char convert;

void input_temperature()
{
    std::cout << "Enter temperature:" << " ";
    cin >> temp;
}

void input_weight()
{
    std::cout << "Enter weight:" << " ";
    cin >> weight;
}

void input_lenght()
{
    std::cout << "Enter lenght:" << " ";
    cin >> weight;
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
    
    do
    {
    
    std::cout << "(T)" << " " << "Temperature" << "\n" << endl;
    std::cout << "(W)" << " " << "Weight" << "\n" << endl;
    
    std::cout << "Select unit:" << " ";

    cin >> unit_select;

    if (unit_select = 'T' || unit_select = 'W')
    {
        if (unit_select = 'T')
        {
            for (auto& temperature_list : temperature_units)
            {
                std::cout << temperature_list << "\n" << endl;
            }
            std::cout << "Enter Unit:" << " ";
            cin >> convert;

            char convert_upper = toupper (convert);

            if (convert_upper == 'C')
            {
                input_temperature();

                std::cout << "Fahrenheit:" << " " << ((temp * 9)/5) + 32 << endl;
                std::cout << "Kelvin:" << " " << temp + 273.15 << endl;
            }
            else if (convert_upper == 'F')
            {
                input_temperature();

            	std::cout << "Celcius:" << " " << ((temp - 32)*5)/9 << endl;
                std::cout << "Kelvin:" << " " << temp + 459.67 << endl;
            }
            else if (convert_upper == 'K')
            {
                input_temperature();

                std::cout << "Celcius:" << " " << (temp - 273.15) << endl;
                std::cout << "Fahrenheit:" << " " << ((temp - 273.15)*9)/5 + 32 << endl;
            }
        }
        else if (unit_select == 'W')
        {
            for (auto& weight_list : weight_units)
            {
                std::cout << weight_list << "\n" << endl;
            }

            std::cout << "Enter Unit:" << " ";
            cin >> convert;

            char convert_upper = toupper (convert);

            if (convert_upper == 'G')
            {
                input_weight();

                std::cout << "Kilogram:" << " " << weight * 1000 << endl;
                std::cout << "Miligram:" << " " << weight * 1000000 << endl;
                std::cout << "Ounce:" << " " << weight * 0.03527396195 << endl;
                std::cout << "Pound:" << " " << (weight / (1000)) * 2.2046 << endl;
            }
            else if (convert_upper == 'KG')
            {
                input_weight();

                std::cout << "Gram:" << " " << weight / (1000) << endl;
                std::cout << "Miligram:" << " " << weight / (1000000) << endl;
                std::cout << "Ounce:" << " " << weight / (0.03527396195) << endl;
                std::cout << "Pound:" << " " << (weight / (1000)) * 2.2046 << endl;
            }
            else if (convert_upper == 'M')
            {
                input_weight();

                std::cout << "Gram:" << " " << weight * 1000 << endl;
                std::cout << "Kilogram:" << " " << weight * 1000 << endl;
            }
        }
    }
    else
    {
        std::cout << "\n" << "Invalid input" << "\n" << endl;
    }

    }
    while (true);
}