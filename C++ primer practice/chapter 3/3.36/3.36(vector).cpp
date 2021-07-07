#include <iostream>
#include<ctime>
#include<cstdlib>
#include <vector>

using namespace std;

int main()
{
	const int sz = 5;		// 常量sz作为数组的维度
	int i;
	vector<int> a, b;
	srand((unsigned)time(NULL));  //生成随机数种子
	//  每次循环生成一个10以内的随机数并添加到a中
	for (i = 0; i < sz; i++)
		a.push_back(rand() % 10);
	cout << "系统数据已经生成，请输入猜测的5个数字（0~9），可以重复：" << endl;
	int uVAL;

	// 通过for循环为数组元素赋值
	for (i = 0; i < sz; i++)
		if (cin >> uVAL)
			b.push_back(uVAL);

	cout << "系统生成的数据是：" << endl;
	for (auto val : a)
		cout << val << " ";
	cout << endl;

	cout << "猜测的数据是：" << endl;
	for (auto val : b)
		cout << val << " ";
	cout << endl;

	auto it1 = a.cbegin(), it2 = b.cbegin();
	while (it1 != a.cend() && it2 != b.cend())
	{
		if (*it1 != *it2)
		{
			cout << "猜测错误，两个vector不相等" << endl;
			system("pause");
			return -1;
		}
		it1++;							// it1向后移动一位
		it2++;							// it2向后移动一位
	}
	cout << "恭喜，全部都猜对了" << endl;
	system("pause");
	return 0;
}
