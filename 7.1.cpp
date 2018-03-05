#include <iostream>
double harmonic_mean(double num1,double num2);
int main()
{
	using namespace std;
	double num1,num2;
	cout << "Always enter two numbers until one of them is 0: ";
	do
	{
		cin >>  num1 >> num2;
		cout << "调和平均数是: " << harmonic_mean(num1,num2) << endl;
	}
	while (num1 != 0 && num2 != 0);
	return 0;
}

double harmonic_mean(double num1,double num2)
{
	return 2.0 * num1 * num2 /( num1 + num2);
}

