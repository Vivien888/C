#include <iostream>

int main()
{
	std::cout << "请输入一些数，按Ctrl+z表示结束" << std::endl;
	int sum = 0, val = 0;
	for (; std::cin >> val;)
		sum += val;
    std::cout << "读入的数之和为" << sum << std::endl;
	system("pause");
	return 0;
}
