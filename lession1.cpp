#include <iostream>

int main()
{
     int a = 1, b = 2;
     int c = a;

     a = b;
     b = c;
     
     std::cout << a;
     std::cout << b;

     return 0;
}