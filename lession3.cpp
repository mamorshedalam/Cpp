#include <iostream>

using namespace std;

int main()
{
     double sales = 95000;
     const double stateTaxRate = 4;
     const double countryTaxRate = 2;
     double stateTax, countryTax, totalSales, totalTax;

     stateTax = (sales * stateTaxRate) / 100;
     countryTax = (sales * countryTaxRate) / 100;
     totalTax = stateTax + countryTax;

     totalSales = sales - totalTax;

     cout << "Sales : $" << sales << endl;
     cout << "State Tax : $" << stateTax << endl;
     cout << "Country Tax : $" << countryTax << endl;
     cout << "--------------------" << endl;
     cout << "Total Tax : $" << totalTax << endl;
     cout << "Total Sales : $" << totalSales << endl;

     return 0;
}