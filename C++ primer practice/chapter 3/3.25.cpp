#include <vector>
#include <iostream>

using namespace std;

int main()
{
	// ��vector�����¼�������ε���������ʼֵ��Ϊ0
	vector<unsigned> vUS(11);
	auto it = vUS.begin();
	int iVal;
	cout << "������һ��ɼ���0~100����" << endl;
	while (cin >> iVal)
		if (iVal <= 101)			// �ɼ�Ӧ�ں���Χ֮��
			++*(it + iVal / 10);	// ���õ�������λ����Ӧ��Ԫ�أ���1

	cout << "�ܼ�������" << vUS.size() << "���ɼ�" << endl;
	cout << "�������ε������ֲ�ʽ���ɼ��Ӹߵ��ͣ���" << endl;
	// ���õ���������vUSԪ�ز�������
	for (it = vUS.begin(); it != vUS.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}
