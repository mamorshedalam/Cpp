#include <iostream>

using namespace std;

int main()
{
     double fahrenheit, celsius;

     cout << "Enter the fahrenheit temperature: ";
     cin >> fahrenheit;

     celsius = (fahrenheit - 32) / 1.8;
     cout << "Celsius temperature is : " << celsius;

     return 0;
}