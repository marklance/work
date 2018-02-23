//参考网上的，但也达不到题目要求，只能把两个文件内容直接加一起
#include<iostream>  
#include<fstream>  
#include<cstdlib>  
#include<string>  
int main()  
{  
    using namespace std;  
    ofstream fin;
    cout << "This program is connet ttwo file to another file.\n";
    cout << "Enter the first filename: ";
    string filename;
    getline(cin, filename);
    fin.open(filename.c_str());
	    cout << "Enter things to the first file:\n";
    string file;
    while (cin.fail() == false)//不理解这个的作用跳不出循环
    {
	    getline(cin, file);
	    fin << file << endl;
	    break;//这个我添加进来跳出循环的,这样只能输入一行
    }
    fin.close();
    cin.clear();
     cout << "Enter the second filename: ";
    string filename2;
    getline(cin, filename2);
    fin.open(filename2.c_str());
	    cout << "Enter things to the second file:\n";
    while (cin.fail() == false)
    {
	    getline(cin, file);
	    fin << file << endl;
	    break;//同理
    }
    fin.close();
    cin.clear();
    cout << "Enter the target filename: ";
    string target;
    getline(cin, target);
    fin.open(target.c_str());
    ifstream fou, fou2;
    fou.open(filename);
    fou2.open(filename2);
    if (!fou.is_open() || !fou2.is_open())
    {
	    cerr << "Could not open the source!" << filename << endl << filename2 << endl;
	    exit(EXIT_FAILURE);
    }
    string file2;
    while (!fou.eof() && !fou2.eof())
    {
	    getline(fou, file);
	    getline(fou2, file2);
	    fin << file + ' ' + file2 << endl;
	    cout << file + ' ' + file2 << endl;
    }

    while (!fou.eof())
    {
	    getline(fou, file);
	    fin << file << endl;
	    cout << file << endl;
    }
    while (!fou2.eof())
    {
	    getline(fou2, file);
	    fin << file << endl;
	    cout << file << endl;
    }
    fou.close();
    fou2.close();
    fin.close();
    return 0;
}
