#include <iostream>
struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};
void show_box(box b);
void convert_box(box * pb);
int main()
{
	using namespace std;
	box carton = {"Bingo Boxer ", 2, 3, 5};
	convert_box(&carton);
	show_box(carton);
	return 0;
}

void convert_box(box * pb)
{
	pb -> volume = pb -> height * pb -> length * pb -> width;
}

void show_box(box b)
{
	using namespace std;
        cout << "Box maker: " << b.maker
             << "\nheight: " << b.height
             << "\nlwidth: " << b.width
             << "\nlength: " << b.length
             << "\nvolume: " << b.volume << endl;
}
