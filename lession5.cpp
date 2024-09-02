#include <iostream>
#include <cmath>

using namespace std;

int main()
{
     double radius, area;
     const double pi = 3.14;

     cout << "Enter the radius of the circle: ";
     cin >> radius;

     area = pi * pow(radius, 2);
     cout << "The circle area is : " << area;

     return 0;
}