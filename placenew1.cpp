#include <iostream>
#include <string>
#include <new>
using namespace std;
const int buf = 512;
class justtesting
{
	private:
		string words;
		int number;
         public:
		justtesting(const string & s = "just testing", int n = 0)
		{words = s; number = n; cout << words << " constructed\n"; }
		~justtesting() { cout << words << " destroyed\n";}
		void show () const { cout << words << ", " << number << endl;}
};
int main ()
{
	char * buffer = new char[buf];
	justtesting *pc1, *pc2;

	pc1 = new (buffer) justtesting;
	pc2 = new justtesting("heap1", 20);

	cout << "Memory block addresses:\n" << "buffer: "
		<< (void *) buffer << "    heap: " << pc2 << endl;
	cout << "Memory contents:\n";
	cout << pc1 << ": ";
	pc1-> show();
	cout << pc2 << ": ";
	pc2-> show();

	justtesting * pc3, *pc4;
	pc3 = new (buffer) justtesting ("Bad Idea", 6);
	pc4 = new justtesting ("heap2", 10);
	cout << "Memory contents:\n";
	cout << pc3 << ": ";
	pc3-> show();

	cout << pc4 << ": ";
	pc4 -> show();
	delete pc2;
	delete pc4;
	delete [] buffer;
	cout << "Done\n";
		return 0;
}

