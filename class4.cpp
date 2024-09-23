#include <iostream>
#include <limits>
using namespace std;

/*int factorial(int n)
{
     int f = 1;
     for (int i = 1; i <= n; ++i)
     {
          f *= i;
     }
     return f;
}

double e()
{
     double s = 1;
     int n = 1;
     while (true)
     {
          double item = 1.0 / factorial(n);
          if (item < 1e-8)
               break;
          s += item;
          ++n;
     }
     cout << s << endl;
}

int main()
{
     cout << e() << endl;
}*/

/*int reversed(int n)
{
     int a = n / 10000;
     int b = n % 10000 / 1000;
     int c = n % 1000 / 100;
     int d = n % 100 / 10;
     int e = n % 10;

     return 10000 * e + 1000 * d + 100 * c + 10 * d + a;
}

bool isPalindrome(int n)
{
     return n == reversed(n);
}

int main()
{
     int i = 0;
     for (int x = 10000; x <= 99999; x++)
     {
          if (isPalindrome(x))
          {
               i++;
               cout << x << ", ";
          }
     }
     cout << endl;
     cout << "i: " << i << endl;
}*/

/* int main()
{
     int i = 1, counter = 5;
     double number, largest = numeric_limits<double>::min(), larger = numeric_limits<double>::min();

     while (true)
     {
          cout << "Please enter the number " << i << ": ";
          cin >> number;

          if (number > largest)
          {
               larger = largest;
               largest = number;
          }

          i++;

          if (i > counter)
          {
               break;
          }
     }

     cout << "The largest number is: " << largest << endl;
     cout << "The larger number is: " << larger;
} */
