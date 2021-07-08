#include <iostream>
using namespace std;
// �ú����Ȳ�����ָ�룬Ҳ������ָ����ָ������
void SwapPointer1(int *p, int *q) {
	int *temp = p;
	p = q;
	q = temp;
}
// �ú�������ָ����ָ������
void SwapPointer2(int *p, int *q) {
	int temp = *p;
	*p = *q;
	*q = temp;
}
// �ú�������ָ�뱾���ֵ��������ָ����ָ���ڴ��ַ
void SwapPointer3(int &p, int &q) {
	int tmp = p;
	p = q;
	q = tmp;
}
int main() {
	int a = 5, b = 10;
	int *p = &a, *q = &b;
	cout << "����ǰ��" << endl;
	cout << "p��ֵ�ǣ�" << p << "��q��ֵ�ǣ�" << q << endl;
	cout << "p��ָ��ֵ�ǣ�" << *p << "��q��ָ��ֵ�ǣ�" << *q << endl;
	SwapPointer1(p, q);
	cout << "������" << endl;
	cout << "p��ֵ�ǣ�" << p << "��q��ֵ�ǣ�" << q << endl;
	cout << "p��ָ��ֵ�ǣ�" << *p << "��q��ָ��ֵ�ǣ�" << *q << endl;

	cout << endl;
	cout << "*********************************************************" << endl;
	cout << endl;

	int c = 5, d = 10;
	int *r = &c, *s = &d;
	cout << "����ǰ��" << endl;
	cout << "p��ֵ�ǣ�" << r << "��q��ֵ�ǣ�" << s << endl;
	cout << "p��ָ��ֵ�ǣ�" << *r << "��q��ָ��ֵ�ǣ�" << *s << endl;
	SwapPointer2(r, s);
	cout << "������" << endl;
	cout << "p��ֵ�ǣ�" << r << "��q��ֵ�ǣ�" << s << endl;
	cout << "p��ָ��ֵ�ǣ�" << *r << "��q��ָ��ֵ�ǣ�" << *s << endl;

	cout << endl;
	cout << "*********************************************************" << endl;
	cout << endl;

	int e = 5, f = 10;
	int *x = &e, *y = &f;
	cout << "����ǰ��" << endl;
	cout << "p��ֵ�ǣ�" << x << "��q��ֵ�ǣ�" << y << endl;
	cout << "p��ָ��ֵ�ǣ�" << *x << "��q��ָ��ֵ�ǣ�" << *y << endl;
	//SwapPointer3(e, f);
	SwapPointer3(*x, *y);
	cout << "������" << endl;
	cout << "p��ֵ�ǣ�" << x << "��q��ֵ�ǣ�" << y << endl;
	cout << "p��ָ��ֵ�ǣ�" << *x << "��q��ָ��ֵ�ǣ�" << *y << endl;

	system("pause");
	return 0;
}