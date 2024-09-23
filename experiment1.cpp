#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

// DISPLAYING THE SHAPES
/*int main()
{
     cout << "*********    ***      *       *     " << endl;
     cout << "*       *   *   *    ***     * *    " << endl;
     cout << "*       *  *     *  *****   *   *   " << endl;
     cout << "*       *  *     *    *    *     *  " << endl;
     cout << "*       *  *     *    *   *       * " << endl;
     cout << "*       *  *     *    *    *     *  " << endl;
     cout << "*       *  *     *    *     *   *   " << endl;
     cout << "*       *   *   *     *      * *    " << endl;
     cout << "*********    ***      *       *     " << endl;
}*/

// DESCENDING ORDER
/* int main()
{
     int a, b, c, d;

     cout << "Enter four numbers: ";
     cin >> a >> b >> c >> d;

     int ascending[4] = {a, b, c, d};
     int descending[4] = {a, b, c, d};
     for (int i = 0; i < 4; i++)
     {
          for (int j = i + 1; j < 4; j++)
          {
               int temp1 = ascending[i];
               ascending[i] = ascending[j];
               ascending[j] = temp1;

               int temp2 = descending[i];
               descending[i] = descending[j];
               descending[j] = temp2;
          }
     }

     cout << "Sorted numbers in ascending order: ";
     for (int i = 0; i < 4; i++)
     {
          cout << ascending[i] << " ";
     }
     cout << endl;

     cout << "Sorted numbers in descending order: ";
     for (int i = 0; i < 4; i++)
     {
          cout << descending[i] << " ";
     }

     return 0;
}*/

// DIGITS OF AN INTEGER
/*int main()
{
     int number;
     int digit_1, digit_2, digit_3, digit_4, digit_5;
     float sum;

     cout << "Enter a five digits integer number: ";
     cin >> number;

     digit_1 = number / 10000;
     digit_2 = number % 10000 / 1000;
     digit_3 = number % 1000 / 100;
     digit_4 = number % 100 / 10;
     digit_5 = number % 10;

     sum = digit_1 + digit_2 + digit_3 + digit_4 + digit_5;

     cout << digit_1 << " " << digit_2 << " " << digit_3 << " " << digit_4 << " " << digit_5 << endl;
     cout << sum;
}*/

// CALCULATE VALUE OF THE FOLLOWING ARITHMETIC EXPRESSIONS
/*int main()
{
     float pi = 3.14;
     int x, y, z;
     double sum_one, sum_two;

     cout << "Enter the value of x: ";
     cin >> x;
     cout << "Enter the value of y: ";
     cin >> y;
     cout << "Enter the value of z: ";
     cin >> z;

     sum_one = (8 * pow(x, 6)) + (3 * pow(x, 5)) + pow(x, 4) + (2 * pow(x, 3)) + (9 * pow(x, 2)) + (5 * x) + 10;

     sum_two = sin((pi / 4) * pow(y, 2)) + (exp(x) - log(pow(y, z)));

     cout << "Answer of the (1) expressions: " << sum_one << endl;
     cout << "Answer of the (2) expressions: " << sum_two;
}*/

// WRITE A PROGRAM TO PRINT A SHOPPING RECEIPT.
/*int main()
{
     float lorem, dolor, consectetur, elit, morbi, sem, tincidunt, cash, total;
     time_t now = time(0);
     char *dt = ctime(&now);

     cout << "Price of lorem: ";
     cin >> lorem;
     cout << "Price of dolor: ";
     cin >> dolor;
     cout << "Price of consectetur: ";
     cin >> consectetur;
     cout << "Price of elit: ";
     cin >> elit;
     cout << "Price of morbi: ";
     cin >> morbi;
     cout << "Price of sem: ";
     cin >> sem;
     cout << "Price of tincidunt: ";
     cin >> tincidunt;
     cout << "Given cash: ";
     cin >> cash;

     total = lorem + dolor + consectetur + elit + morbi + sem + tincidunt;

     cout << "Cash Receipt \t\t" << " Date: " << dt;
     cout << "......................................................." << endl;
     cout << "Lorem ipsum \t\t\t\t\t" << lorem << "$" << endl;
     cout << "Dolor sit amet \t\t\t\t\t" << dolor << "$" << endl;
     cout << "Consectetur \t\t\t\t\t" << consectetur << "$" << endl;
     cout << "Adipiscing elit \t\t\t\t" << elit << "$" << endl;
     cout << "Morbi commodo \t\t\t\t\t" << morbi << "$" << endl;
     cout << "Sem vitae \t\t\t\t\t" << sem << "$" << endl;
     cout << "Tincidunt \t\t\t\t\t" << tincidunt << "$" << endl;
     cout << "......................................................." << endl;
     cout << "Total \t\t\t\t\t\t" << total << "$" << endl;
     cout << "Cash \t\t\t\t\t\t" << cash << "$" << endl;
     cout << "Change \t\t\t\t\t\t" << cash - total << "$" << endl;
}*/