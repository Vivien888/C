#include <iostream>
#include <string>

using namespace std;

int main()		// ʹ��getlineһ�ζ���һ����
{
	string s;
	// ѭ����ȡ��ÿ�ζ���һ���У�ֱ���ļ������������쳣����
	cout << "�������ַ��������԰����ո�" << endl;
	while (getline(cin, s))
		cout << s << endl;
	system("pause");
	return 0;
}
