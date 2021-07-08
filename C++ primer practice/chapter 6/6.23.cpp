#include <iostream>
using namespace std;
// �����ǳ�������ָ��
void print1(const int *p) {
	cout << *p << endl;
}
// �������������ֱ��ǳ�������ָ������������
void print2(const int *p, const int sz) {
	int i = 0;
	while (i != sz) {
		cout << *p++ << endl;
		++i;
	}
}
// �������������ֱ����������β�߽�
void print3(const int *b, const int *e) {
	for (auto q = b; q != e; ++q) {
		cout << *q << endl;
	}
}
int main() {
	int i = 0, j[2] = { 0, 1 };
	print1(&i);
	print1(j);

	cout << endl;
	cout << "*********************************************************" << endl;
	cout << endl;

	print2(&i, 1);
	//����õ�����j������
	print2(j, sizeof(j) / sizeof(*j));

	cout << endl;
	cout << "*********************************************************" << endl;
	cout << endl;

	auto b = begin(j);
	auto e = end(j);
	print3(b, e);

	system("pause");
	return 0;
}
