#include <iostream>
// ʹ�ù�using����ʹ��cout��endl�ڳ����пɼ�
using namespace std;
int main()
{
	int sum = 0, val = 50;
	while (val <= 100) {
		sum += val;
		val += 1;
	}
	cout << "Sum of 50 to 100 inclusive is "
		<< sum << endl;
	system("pause");
	return 0;
}

