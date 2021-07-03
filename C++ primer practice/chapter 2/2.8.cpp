#include <iostream>

int main()
{
	std::cout << "2\x4d\012";
	std::cout << "2\tM\n";

	/*
	std::cout << 2 << "\115\012";
	std::cout << 2 << "\t\115\012";
	*/

	system("pause");
	return 0;
}
