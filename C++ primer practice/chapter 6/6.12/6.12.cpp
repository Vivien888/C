#include <iostream>
using namespace std;
void mySwap(int &p, int &q) {
	int tmp = p;
	p = q;
	q = tmp;
}
int main() {
	int a = 5, b = 10;
	cout << "����ǰ��a = " << a << "��b = " << b << endl;
	// ָ���β�
	mySwap(a, b);
	// �����βΣ����飩
	// mySwap(&a, &b);
	cout << "������a = " << a << "��b = " << b << endl;

	system("pause");
	return 0;
}
