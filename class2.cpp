#include <iostream>

using namespace std;

int main()
{
     int a, b, c, d;

     cout << "Please, enter the number a, b, c and d : ";
     cin >> a >> b >> c >> d;

     if (a > b & a > c & a > d)
     {
          cout << a << " is the biggest number.";
     }
     else if (b > a & b > c & b > d)
     {
          cout << b << " is the biggest number.";
     }
     else if (c > a & c > b & c > d)
     {
          cout << c << " is the biggest number.";
     }
     else if (d > a & d > b & d > c)
     {
          cout << d << " is the biggest number.";
     }
     else
     {
          cout << "Four numbers are same";
     }
}