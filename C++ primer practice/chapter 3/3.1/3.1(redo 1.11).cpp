#include <iostream>
// ʹ�ù�using����ʹ��cout��endl�ڳ����пɼ�
using namespace std;
int main()
{
	cout << "Please input two num:" << endl;
	int start = 0, end = 0;
	cin >> start >> end;
	if (start <= end) {
		while (start <= end)
		{
			cout << start << " ";
			++start;
		}
	}
	cout << endl;
	system("pause");
	return 0;
}
