#include <iostream>
using namespace std;
int main()
{
	unsigned vowelCnt = 0;
	char ch;
	cout << "������һ���ı���" << endl;
	while (cin >> ch)
	{
		if (ch == 'a')
			++vowelCnt;
		else if (ch == 'e')
			++vowelCnt;
		else if (ch == 'i')
			++vowelCnt;
		else if (ch == 'o')
			++vowelCnt;
		else if (ch == 'u')
			++vowelCnt;
	}
	cout << "��������ı��й��� " << vowelCnt << " ��Ԫ����ĸ" << endl;
	system("pause");
	return 0;
}
