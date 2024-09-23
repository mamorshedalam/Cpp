#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
     const short maxValue = 6;
     const short minValue = 1;
     srand(time(0));
     int dice = (rand() % (maxValue - minValue + 1)) + minValue;

     cout << dice;

     return 0;
}