#include <iostream>
using namespace std;
void reset(int &i) {
	i = 0;
}
int main() {
	int num = 5;
	cout << "����ǰ��num = " << num << endl;
	reset(num);
	cout << "����ǰ��num = " << num << endl;

	system("pause");
	return 0;
}
