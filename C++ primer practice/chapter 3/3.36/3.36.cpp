#include <iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{
	const int sz = 5;		// ����sz��Ϊ�����ά��
	int a[sz], b[sz], i = 0;
	srand((unsigned)time(NULL));  //�������������
	//  ÿ��ѭ������һ��10���ڵ����������ӵ�a��
	for (i = 0; i < sz; i++)
		a[i] = rand()%10;
	cout << "ϵͳ�����Ѿ����ɣ�������²��5�����֣�0~9���������ظ���" << endl;
	int uVAL;

	// ͨ��forѭ��Ϊ����Ԫ�ظ�ֵ
	for ( i = 0; i < sz; i++)
		if (cin >> uVAL)
			b[i] = uVAL;

	cout << "ϵͳ���ɵ������ǣ�" << endl;
	for (auto val : a)
		cout << val << " ";
	cout << endl;

	cout << "�²�������ǣ�" << endl;
	for (auto val : b)
		cout << val << " ";
	cout << endl;

	int *p = begin(a), *q = begin(b);			// ��pָ��������Ԫ��
	while (p != end(a) && q !=end(b))
    {
		if (*p != *q)
		{
			cout << "�²�����������ݲ����" << endl;
			system("pause");
			return -1;
		}
		p++;							// p����ƶ�һλ
		q++;							// q����ƶ�һλ
	}
	cout << "��ϲ��ȫ�����¶���" << endl;
	system("pause");
	return 0;
}
