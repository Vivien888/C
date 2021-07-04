#include <iostream>
using namespace std;
#include<typeinfo>
int main()
{
	auto a = 42;
	cout << typeid(a).name() << endl;
	const auto b = 42;
	const int &bi = b;
	cout << typeid(b).name() << endl;
	auto c = bi;
	cout << typeid(c).name() << endl;
	auto d = &a;
	cout << typeid(d).name() << endl;
	auto e = &b;
	cout << typeid(e).name() << endl;
	auto &g = b;
	cout << typeid(g).name() << endl;
	system("pause");
	return 0;
}
