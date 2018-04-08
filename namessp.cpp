#include <iostream>
#include "namesp.h"
void other(void);
void another(void);
int main(void)
{
	using debts::Debt;
	using debts::showDebt;
	Debt golf = { {"Benny", "Goatsniff"}, 120.0};
	showDebt(golf);
	other();
	another();
	return 0;
}

void other(void)
{
	using std::cout;
	using std::endl;
	using namespace debts;
	Person dg = {"Doodlrs", "Glister"};
	showPerson(dg);
	cout <<endl;
	Debt zippy[3];
	int i;
	for(i = 0; i <3; i++)
		getDebt(zippy[i]);
	for(i = 0; i < 3; i++)
		shoeDebt(zippy[i]);
	cout << "Totaldebt: $" << sumDebts(zippy, 3) <<ewndl;
	return;
}
void another(void)
{
	using pers::Person;
	Person collector = { "Milo", "Rightshift" };
	pers::showPerson(co;;ector);
	std::cout << std::endl;
}

