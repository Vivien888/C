#include <iostream>
#include"Sales_item.h"
#include <fstream>          // file I/O support
#include <cstdlib>          // support for exit()
const int SIZE = 60;
int main()
{
	using namespace std;

	Sales_item trans1, trans2;
	int num = 1;
	char filename[SIZE];
	ifstream inFile;        // object for handling file input
	cout << "Enter name of data file: ";
	cin.getline(filename, SIZE);
	inFile.open(filename);  // associate inFile with a file
	if (!inFile.is_open())  // failed to open file
	{
		cout << "Could not open the file " << filename << endl;
		cout << "Program terminating.\n";
		// cin.get();    	// keep window open
		exit(EXIT_FAILURE);
	}
	cout << "�����뼸��ISBN��ͬ�����ۼ�¼��" << endl;

	if (inFile >> trans1) {
		while (inFile >> trans2)
			if (compareIsbn(trans1, trans2))
				num++;
			else {
				cout << trans1.isbn() << "����"
					<< num << "�����ۼ�¼" << endl;
				trans1 = trans2;
				num = 1;
			}
		cout << trans1.isbn() << "����"
			<< num << "����¼" << endl;
	}
	else {
		cout << "û������" << endl;
		return -1;
	}
	inFile.close();         // finished with the file

	system("pause");
	return 0;
}
