#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
	vector<string> scores = { "F", "D", "C", "B", "A", "A++" };
	cout << "���������ĳɼ���" << endl;
	for (int g; cin >> g;)
	{
		string letter;
		if (g < 0 || g > 100)
		{
			cout << "�óɼ����Ϸ�������" << endl;
			continue;
		}
		letter = (g < 60) ? scores[0] : scores[(g - 50) / 10];
		letter += (g == 100 || g < 60) ? "" : g % 10 > 7 ? "+" : g % 10 < 3 ? "-" : "";
		cout << "�ȼ��ɼ��ǣ�" << letter << endl;
	}
	system("pause");
	return 0;
}
