#include<iostream>
#include<string>
using namespace std;
// ���һ���βθ�����Ĭ��ʵ��
string make_plural(size_t ctr, const string &word, const string &ending = "s")
{
	return (ctr > 1) ? word + ending : word;
}
int main() {
	cout << "success�ĵ�����ʽ�ǣ�" << make_plural(1, "success", "es") << endl;
	cout << "success�ĸ�����ʽ�ǣ�" << make_plural(2, "success", "es") << endl;
	// һ������µ��øú���ֻ��Ҫ����ʵ��
	cout << "failure�ĵ�����ʽ�ǣ�" << make_plural(1, "failure") << endl;
	cout << "failure�ĵ�����ʽ�ǣ�" << make_plural(2, "failure") << endl;

	system("pause");
	return 0;
}