#include <iostream>
#include <string>
using namespace std;
int main()
{
	string currString, preString = "", maxString;
	int currCnt = 1, maxCnt = 0;
	cout << "�������ַ�����" << endl;
	while (cin >> currString)
	{
		if (currString == preString)
		{
			++currCnt;
			if (currCnt > maxCnt)
			{
				maxCnt = currCnt;
				maxString = currString;
			}
		}
		else
		{
			currCnt = 1;
		}
		preString = currString;
	}
	if (maxCnt > 1)
		cout << "���������ַ����ǣ�" << maxString << "�������ǣ�" << maxCnt << endl;
	else
		cout << "ÿ���ַ�����ֻ������һ��" << endl;
	system("pause");
	return 0;
}
