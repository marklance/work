#include <iostream>
using namespace std;
const int SLEN = 30;
struct student {
char fullname[SLEN];
char hobby[SLEN];
int ooplevel;
};
int getinfo(student pa[], int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[], int n);
int main()
{
cout << "Enter class size: ";
int class_size;
cin >> class_size;
while (cin.get() != '\n')
continue;
student * ptr_stu = new student[class_size];
int entered = getinfo(ptr_stu, class_size);
for (int i = 0; i < entered; i++)
{
display1(ptr_stu[i]);
display2(&ptr_stu[i]);
}
display3(ptr_stu, entered);
delete [] ptr_stu;
cout << "Done\n";
return 0;
}
int getinfo(student * p, int num)
{
int i;
for (i = 0; i < num; i++)
{
cout << "Enter the fullname: ";
cin.getline((p + i)->fullname, SLEN);
cout << "Enter the hobby: ";
cin.getline((p + i)->hobby, SLEN);
cout << "Enter the ooplevel: ";
cin >> (p + i)->ooplevel;
if (!cin)
break;
else
cin.get();
}
return i;
}
void display1(student st)
{
cout << st.fullname << " "
<< st.hobby << " "
<< st.ooplevel << endl;
}
void display2(const student * ps)
{
cout << ps->fullname << " "
<< ps->hobby << " "
<< ps->ooplevel << endl;
}
void display3(const student pa[], int num)
{
for (int i = 0; i < num; i++)
{
cout << pa[i].fullname << " "
<< pa[i].hobby << " "
<< pa[i].ooplevel << endl;
}
}
