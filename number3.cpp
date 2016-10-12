//
//
//
//
//

#include <iostream>

using namespace std;

int main ()
{
	double price=95;
	double stateSalesTax = (0.04);
	double countrySalesTax = (0.02);
	double totalTax = (stateSalesTax+countrySalesTax);
	double totalSalesTax = (price*totalTax);
	cout << "Total sales tax is " << totalSalesTax << endl;
}
