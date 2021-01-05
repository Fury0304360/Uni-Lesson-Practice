#include <iostream>
using namespace std;

int main()
{
    //7.481 gallons in a cubic foot
    const double gallons_cubicfoot = 7.481;
    double gallons,cubic_foot;
    cout << "Enter Gallons: ";
    cin >> gallons;
    cubic_foot = gallons / gallons_cubicfoot;
    cout << "Cubic_foot: " << cubic_foot;

    return 0;
}
