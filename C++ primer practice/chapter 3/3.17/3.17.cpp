#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> vString;		// Ԫ������Ϊstring��vector����
	string s;
	char cont = 'y';			// ���û������������Ƿ��������
	cout << "�������һ���ʣ�" << endl;
	while (cin >> s)
	{
		vString.push_back(s);	// ��vector���������Ԫ��
		cout << "Ҫ�����y or n����" << endl;
		cin >> cont;
		if (cont != 'y' && cont != 'Y')
			break;
		cout << "��������һ���ʣ�" << endl;
	}
	cout << "��������һ���ʣ�" << endl;
	for (auto &mem : vString)
	{
		for (auto &c : mem)
			c = toupper(c);
		cout << mem << endl;
	}
	system("pause");
	return 0;
}
