#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    char unit;
    char convert;
    double temp;
    char to;

    cout << "T" << " " << "Temperature" << "\n" << endl;
    
    cout << "Select unit:" << " " << endl;
    cin >> unit;

    cout << "C = Celcius" << endl;
    cout << "F = Fahrenheit" << endl;
    cout << "K = Kelvin" << endl;
    cin >> convert;

    if (unit == 'T' || unit == 't')
    {
        if (convert == 'C' || convert == 'c')
        {
            cout << "Enter temperature to convert:" << " " << endl;
            cin >> temp;
            cout << "to:" << " " << endl;
            cin >> to;
            
            if (temp == 'T' || 't')
            {
                double result = (5/9)*(temp - 32);
            }
        }
    }
    else
    {
        cout << "Invalid input" << endl;
    }

}