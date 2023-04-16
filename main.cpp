#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    char unit;
    char convert;
    double temp;

    cout << "T" << " " << "=" << " " << "Temperature" << "\n" << endl;
    
    cout << "Select unit:" << " " << endl;
    cin >> unit;

    if (unit == 'T' || unit == 't')
    {
        cout << "Enter C or F or or K:" << " " << endl;
        cin >> convert;

        if (convert == 'C' || convert == 'c')
        {
            cout << "Enter temperature:" << " " << endl;
            cin >> temp;
            
        }
    }
    else
    {
        cout << "Invalid input" << endl;
    }

}