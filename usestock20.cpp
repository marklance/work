#include <iostream>
#include "stock20.h"
const int STKS = 4;
int main()
{
	Stock stock[STKS] = {
		Stock("NanoSmart", 12, 20.0),
		Stock("Boffo Object", 200, 2.0),
		Stock("Monolithic Oblisks", 130, 3.25),
		Stock("Fleep Enterprises", 60, 6.5)
	};
	std::cout << "Stock holdings:\n";
	int st;
	for (st = 0; st < STKS; st++)
		stock[st].show();
	const Stock * top = &stock[0];
	for (st = 1; st < STKS; st++)
		top = &top->topval(stock[st]);
	std::cout << "\nMost valuable holding:\n";
	top->show();
	return 0;
}


		
