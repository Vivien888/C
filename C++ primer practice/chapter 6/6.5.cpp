#include <iostream>
#include <cmath>
using namespace std;
double myABS(double val)
{
	if (val < 0)
		return val * -1;
	else
		return val;
}
double sysABS(double val)
{
	return abs(val);
}
int main()
{
	double num;
	cout << "������һ������";
	cin >> num;
	cout << num << " �� myABS ����ֵ�� " << myABS(num) << endl;
	cout << num << " �� sysABS ����ֵ�� " << sysABS(num) << endl;

	system("pause");
	return 0;
}
