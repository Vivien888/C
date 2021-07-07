#include <iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{
	const int sz = 5;		// 常量sz作为数组的维度
	int a[sz], b[sz], i = 0;
	srand((unsigned)time(NULL));  //生成随机数种子
	//  每次循环生成一个10以内的随机数并添加到a中
	for (i = 0; i < sz; i++)
		a[i] = rand()%10;
	cout << "系统数据已经生成，请输入猜测的5个数字（0~9），可以重复：" << endl;
	int uVAL;

	// 通过for循环为数组元素赋值
	for ( i = 0; i < sz; i++)
		if (cin >> uVAL)
			b[i] = uVAL;

	cout << "系统生成的数据是：" << endl;
	for (auto val : a)
		cout << val << " ";
	cout << endl;

	cout << "猜测的数据是：" << endl;
	for (auto val : b)
		cout << val << " ";
	cout << endl;

	int *p = begin(a), *q = begin(b);			// 令p指向数组首元素
	while (p != end(a) && q !=end(b))
    {
		if (*p != *q)
		{
			cout << "猜测错误，两个数据不相等" << endl;
			system("pause");
			return -1;
		}
		p++;							// p向后移动一位
		q++;							// q向后移动一位
	}
	cout << "恭喜，全部都猜对了" << endl;
	system("pause");
	return 0;
}
