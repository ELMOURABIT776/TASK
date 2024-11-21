#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double fahrenheit, celsius, kelvin;


    cout << "Enter the temperature in Fahrenheit: ";
    cin >> fahrenheit;


    celsius = (5.0 / 9.0) * (fahrenheit - 32);


    kelvin = celsius + 273.15;

    
    cout << fixed << setprecision(2);
    cout << "Temperature in Celsius: " << celsius << "°C" << endl;
    cout << "Temperature in Kelvin: " << kelvin << " K" << endl;

    return 0;
}