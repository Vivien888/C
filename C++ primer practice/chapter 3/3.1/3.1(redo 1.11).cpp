#include <iostream>
// 使用过using声明使得cout和endl在程序中可见
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
