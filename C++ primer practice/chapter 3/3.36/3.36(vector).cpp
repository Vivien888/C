#include <iostream>
#include<ctime>
#include<cstdlib>
#include <vector>

using namespace std;

int main()
{
	const int sz = 5;		// ����sz��Ϊ�����ά��
	int i;
	vector<int> a, b;
	srand((unsigned)time(NULL));  //�������������
	//  ÿ��ѭ������һ��10���ڵ����������ӵ�a��
	for (i = 0; i < sz; i++)
		a.push_back(rand() % 10);
	cout << "ϵͳ�����Ѿ����ɣ�������²��5�����֣�0~9���������ظ���" << endl;
	int uVAL;

	// ͨ��forѭ��Ϊ����Ԫ�ظ�ֵ
	for (i = 0; i < sz; i++)
		if (cin >> uVAL)
			b.push_back(uVAL);

	cout << "ϵͳ���ɵ������ǣ�" << endl;
	for (auto val : a)
		cout << val << " ";
	cout << endl;

	cout << "�²�������ǣ�" << endl;
	for (auto val : b)
		cout << val << " ";
	cout << endl;

	auto it1 = a.cbegin(), it2 = b.cbegin();
	while (it1 != a.cend() && it2 != b.cend())
	{
		if (*it1 != *it2)
		{
			cout << "�²��������vector�����" << endl;
			system("pause");
			return -1;
		}
		it1++;							// it1����ƶ�һλ
		it2++;							// it2����ƶ�һλ
	}
	cout << "��ϲ��ȫ�����¶���" << endl;
	system("pause");
	return 0;
}
