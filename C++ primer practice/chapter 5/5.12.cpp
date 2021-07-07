#include <iostream>
using namespace std;
int main()
{
	unsigned int ffCnt = 0, f1Cnt = 0, fiCnt = 0;
	char ch,prech='\0';
	cout << "请输入一段文本：" << endl;
	while (cin >> ch)
	{
		bool bl = true;
		if (prech == 'f') 
		{
			switch (ch)
			{
			case 'f':
				++ffCnt;
				bl = false;
				break;
			case '1':
				++f1Cnt;
				break;
			case 'i':
				++fiCnt;
				break;
			}
		}
		if (!bl)
			prech = '\0';
		else
			prech = ch;
	}
	cout << "Number of ff: \t" << ffCnt << '\n'
		<< "Number of f1: \t" << f1Cnt << '\n'
		<< "Number of fi: \t" << fiCnt << endl;
	system("pause");
	return 0;
}
