#include <iostream>

using namespace std;

int main()
{
     double sales = 95000;
     double stateTax = 4;
     double countryTax = 2;
     double totalStateTax, totalCountryTax, totalSales, totalTax;

     totalStateTax = (sales * stateTax) / 100;
     totalCountryTax = (sales * countryTax) / 100;
     totalTax = totalStateTax + totalCountryTax;

     totalSales = sales - totalTax;

     cout << "Sales : $" << sales << endl;
     cout << "State Tax : $" << totalStateTax << endl;
     cout << "Country Tax : $" << totalCountryTax << endl;
     cout << "--------------------" << endl;
     cout << "Total Tax : $" << totalTax << endl;
     cout << "Total Sales : $" << totalSales << endl;

     return 0;
}