#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	const int sz = 10;  				// ����sz��Ϊ�����ά��
	vector<int> vInt;
	srand((unsigned)time(NULL));  	// �������������
	cout << "vector�����������" << endl;
	// ���÷�Χforѭ������vector��ÿ��Ԫ��
	for (int i=0; i!=sz; i++)
	{
		vInt.push_back ( rand() % 100);				// ����һ��100���ڵ������
		cout << vInt[i] << " ";
	}
	cout << endl;
	
	auto it = vInt.cbegin();
	int *a = new int[vInt.size()];
	cout << "����������ǣ�" << endl;
	// ���÷�Χforѭ�����������ÿ��Ԫ��
	for (int i=0; i<vInt.size(); ++i)
	{
		a[i] = *it;
		cout << a[i] << " ";
		++it;
	}
	cout << endl;
	system("pause");
	return 0;
}
