#include <iostream>
#include <string>
const int Seasons = 4;
using namespace std;
const char *  Snames[] =
{"Spring", "Summer", "Fall", "Winter"};

void fill(double ar[], int n);

void show(double ar[],int n);
int main()
{
	double expenses[Seasons];
	fill (expenses, Seasons);
	show(expenses, Seasons);
	return 0;
}


void fill(double ar[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> ar[i];
	}
}


void show(double ar[],int n)
{
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for ( int i = 0; i < n; i++)
	{
		cout << Snames[i] << ": $" << ar[i] << endl;
		total += ar[i];
	}
	cout << "Total Expenses: $" << total << endl;
}
