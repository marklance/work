#include <iostream>
const int arsize = 80;
char * left(const char * str, int n);
int main()
{
	using namespace std;
	char sample[arsize];
	cout << "Enter a string:\n";
	cin.get (sample,arsize);
	char *ps = left(sample, 4);
	cout << ps << endl;
	delete [] ps;
	ps = left(sample, 1);
	cout << ps << endl;
	delete [] ps;
	return 0;
}

char * left(const char * str, int n)
{
	if (n < 0)
	n = 0;
	char *p = new char [n+1];
	int i;
	for (i = 0; i < n && str[i]; i++)
		p[i] = str[i];
	while (i <= n)
		p[i++] = '\0';
	return p;
}
