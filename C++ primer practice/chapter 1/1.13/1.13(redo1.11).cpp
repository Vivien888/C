#include <iostream>

int main()
{
	std::cout << "Please input two num:" << std::endl;
	int start = 0, end = 0;
	std::cin >> start >> end;
	if (start <= end) {
		for (; start <= end; ++start)
{
			std::cout << start << " ";
		}
	}
	std::cout << std::endl;
	system("pause");
	return 0;
}
