#include <iostream>
#include <string>
using namespace std;
int main()
{
	string finalgrade;
	int grade;
	cout << "��������Ҫ���ĳɼ���" << endl;
	while (cin >> grade && grade >= 0 && grade <= 100)
	{
		if (grade > 90)
			finalgrade = "high pass";
		else if (grade > 75)
			finalgrade = "pass";
		else if (grade > 60)
			finalgrade = "low pass";
		else
			finalgrade = "fail";
		cout << "�óɼ������ĵ����ǣ�" << finalgrade << endl;
		cout << "��������Ҫ���ĳɼ���" << endl;
	}

	system("pause");
	return 0;
}