#include <iostream>
#include <string>
using namespace std;
bool HasUpper(const string& str) {
	for (auto c : str)
		if (isupper(c))
			return true;
	return false;
}
void ChangeToLower(string& str) {
	for (auto &c : str)
		c = tolower(c);
}
int main() {
	cout << "������һ���ַ�����" << endl;
	string str;
	cin >> str;
	if (HasUpper(str)) {
		ChangeToLower(str);
		cout << "ת������ַ����ǣ�" << str << endl;
	}
	else {
		cout << "���ַ���������д��ĸ������ת��!" << endl;
	}

	system("pause");
	return 0;
}
