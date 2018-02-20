#include <iostream>
int main()
{
	using namespace std;
	char ch;
	int count = 0;
	while (cin.get(ch) && ch != '$')
		count++;
	if (ch == '$')
		cin.putback(ch);
	else
		cout << "End of input was reached\n";

	cout << count << "characters read\n ";
	cin.get(ch);
	cout << "Then next input character is " << ch << endl;
	return 0;
}



