#include<iostream>
#include"Sales_data2.h"
using namespace std;
int main() {
	Sales_data total, trans;
	cout << "�����뽻�׼�¼��ISBN����������ԭ�ۡ�ʵ���ۼۣ���" << endl;
	if (cin >> total) {
		while (cin >> trans)
			if (total.isbn() == trans.isbn()) {
				total.combine(trans);
			}
			else {
				cout << total << endl;
				total = trans;
			}
		cout << total << endl;
	}
	else {
		cerr << "û������" << endl;
		return -1;
	}
	system("pause");
	return 0;
}
