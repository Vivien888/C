#include<iostream>
#include"Sales_data3.h"
using namespace std;
int main() {
	Sales_data total(cin);
	if (cin) {
		Sales_data trans(cin);
		while (read(cin, trans))
			if (total.isbn() == trans.isbn()) {
				total = add(total, trans);
			}
			else {
				print(cout, total);
				cout << endl;
				total = trans;
			}
		print(cout, total);
		cout << endl;
	}
	else {
		cerr << "û������" << endl;
		return -1;
	}
	system("pause");
	return 0;
}
