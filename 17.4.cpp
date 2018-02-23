#include <iostream>
#include <fstream>

int main(int argc, char *argv[]) {
  using namespace std;
  if (argc != 4) 
  {
    cout << "参数有误!" << endl;
    cout << "usage: " << argv[0] << " 文件1 文件2 文件2" << endl;
    exit(EXIT_FAILURE);
  }

  ifstream firstIn(argv[1]);
  ifstream secondIn(argv[2]);
  ofstream fout(argv[3]);
  string str1, str2;
  while (!firstIn.eof() && !secondIn.eof()) {
    if (getline(firstIn, str1)) {
      fout << str1;
    } else {
      break;
    }

    if (getline(secondIn, str2)) {
      fout << " " + str2 << endl;
    } else {
      fout << endl;
      break;
    }
  }

  while (getline(firstIn, str1)) {
    fout << str1 << endl;
  }

  while (getline(secondIn, str2)) {
    fout << str2 << endl;
  }

  firstIn.close();
  secondIn.close();
  fout.close();

  return 0;
}
