#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	cout << "������һ���ַ��������԰����ո�" << endl;
	getline(cin, s);		// ��ȡ���У����س�������
	for (char &c : s)		// ���δ����ַ����е�ÿһ���ַ�
	{
		c = 'X';
	}
	cout << s << endl;
	system("pause");
	return 0;
}