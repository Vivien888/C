#include <iostream>
using namespace std;
// �ں������ڲ�ͨ�������ò����ı�ָ����ָ������
void mySwap(int *p, int *q) {
	int tmp = *p;
	*p = *q;
	*q = tmp;
}
int main() {
	int a = 5, b = 10;
	int *r = &a, *s = &b;
	cout << "����ǰ��a = " << a << "��b = " << b << endl;
	// ָ���β�
	mySwap(r, s);
	// �����βΣ����飩
	// mySwap(&a, &b);
	cout << "������a = " << a << "��b = " << b << endl;

	system("pause");
	return 0;
}
