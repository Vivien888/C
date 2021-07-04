#include <iostream>
using namespace std;
#include<typeinfo>
int main()
{
	auto a = 42;
	std::cout << a << endl;
	const auto b = 42;
	const int &bi = b;
	std::cout << b << endl;
	auto c = bi;
	std::cout << c << endl;
	auto d = &a;
	std::cout << d << endl;
	auto e = &b;
	std::cout << e << endl;
	auto &g = b;
	std::cout << g << endl;
	system("pause");
	return 0;
}
