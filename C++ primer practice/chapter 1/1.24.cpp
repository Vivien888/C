#include<iostream>
#include"Sales_item.h"
int main() {
	Sales_item trans1, trans2;
	int num = 1;
	std::cout << "�����뼸��ISBN��ͬ�����ۼ�¼��" << std::endl;
	if (std::cin >> trans1) {
		while (std::cin >> trans2)
			if (compareIsbn(trans1, trans2))
				num++;
			else {
				std::cout << trans1.isbn() << "����"
					<< num << "�����ۼ�¼" << std::endl;
				trans1 = trans2;
				num = 1;
			}
		std::cout << trans1.isbn() << "����"
			<< num << "����¼" << std::endl;
	}
	else {
		std::cout << "û������" << std::endl;
		return -1;
	}
	system("pause");
	return 0;
}
