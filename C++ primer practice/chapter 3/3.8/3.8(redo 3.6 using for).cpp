#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	cout << "������һ���ַ��������԰����ո�" << endl;
	getline(cin, s);
	for (int i = 0; s[i] != '\0';++i)
	{
		s[i] = 'X';
	}
	cout << s << endl;
	system("pause");
	return 0;
}
