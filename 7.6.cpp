#include <iostream>
using namespace std;
const int Asize = 10;
int Fill_array(double [], int);
void Show_array(double [], int);
double * Reverse_array(double [], int, int);
int main()
{
double numbers[Asize];
cout << "Please enter some numbers(less than ten,q to quit): \n";
int i = Fill_array(numbers, Asize);
cout << "You've entered " << i << " numbers:\n";
Show_array(numbers, i);
cout << endl;
double * pt = Reverse_array(numbers, 0, i);
Show_array(pt, i);
cout << endl;
return 0;
}
int Fill_array(double ar[], int size)
{
int i;
for (i = 0; i < Asize; i++)
{
if (cin >> ar[i])
;
else
break;
}
return i;
}
void Show_array(double ar[], int size)
{
for (int i = 0; i < size; i++)
cout << ar[i] << " ";
}
double * Reverse_array(double ar[], int a, int size)
{
cout << "Here are(is) the number(s) after reverse:\n";
double temp;
for (int i = a; i < size / 2; i++)
{
temp = ar[i];
ar[i] = ar[size - i - 1];
ar[size - i - 1] = temp;
}
return ar;
}
