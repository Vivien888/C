#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	vector<int> vInt;
	const int sz = 10;
	srand((unsigned)time(NULL));
	cout << "����ĳ�ʼֵ�ǣ�" << endl;
	for (int i = 0; i != sz; ++i)
	{
		vInt.push_back(rand() % 100);
		cout << vInt[i] << " ";
	}
	cout << endl;
	for (auto &val : vInt)
		val = (val % 2 != 0) ? val * 2 : val;
	cout << "�����������ֵ�ǣ�" << endl;
	for (auto it = vInt.cbegin(); it != vInt.cend(); ++it)
		cout << *it << " ";
	cout << endl;

	system("pause");
	return 0;
}
