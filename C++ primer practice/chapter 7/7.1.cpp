#include<iostream>
#include"Sales_data2.h"
using namespace std;
int main() {
	cout << "�����뽻�׼�¼��ISBN����������ԭ�ۡ�ʵ���ۼۣ���" << endl;
	Sales_data total;				//������һ�����׼�¼�ı���
	//�����һ�����׼�¼����ȷ�������ݿ��Դ���
	if (cin >> total) {
		Sales_data trans;			//����͵ı���
		//���벢����ʣ�ཻ�׼�¼
		while (cin >> trans) {
			//����������ڴ�����ͬ����
			if (total.isbn() == trans.isbn())
				total += trans;		//���������۶�
			else {
				//��ӡǰһ����Ľ��
				cout << total << endl;
				total = trans;		//total���ڱ�ʾ��һ��������۶�
			}
		}
		cout << total << endl;		//��ӡ���һ����Ľ��
	}
	else {
		//û�����룡�������
		cerr << "No data����" << endl;
		return -1; // ��ʾʧ��
	}

	system("pause");
	return 0;
}
