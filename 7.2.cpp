#include <iostream>
using namespace std;
const int size = 10;
int ent(double ar[], int limit);
void show(const double ar[],int n);
double ave (const double ar[],int n);

int main()
{
	double grades[size] = {0.0};
	int num = ent (grades,size);
	cout << "Show the grades: " << endl;
	show(grades,num);
	cout << endl;
	cout << "The averagr is: ";
       	ave(grades,num);
	return 0;
}





int ent(double ar[], int limit)
{
double temp;
int i;
for (i = 0; i < limit; i++)
{
cout << "Enter score #" << i+1 << ": ";
cin >> temp;
if (!cin)
{
cin.clear();
while (cin.get() != '\n')
continue;
cout << "Bad input; enter a number:\n";
break;
}
if (temp < 0)
break;
ar[i] = temp;
}
return i;
}


void show(const double ar[],int n)
{
	for (int j = 0; j < n; j++)
		cout << ar[j] << " ";
}



double ave (const double ar[],int n)
{
	double sum = 0.0;
	for (int h = 0; h < n; h++)
		sum += ar[h];
	cout << sum/n << endl;
}




	

