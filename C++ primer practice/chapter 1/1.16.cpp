#include <iostream>

int main()
{
	std::cout << "������һЩ������Ctrl+z��ʾ����" << std::endl;
	int sum = 0, val = 0;
	for (; std::cin >> val;)
		sum += val;
    std::cout << "�������֮��Ϊ" << sum << std::endl;
	system("pause");
	return 0;
}
