#include <iostream>

int main() {

	int x, y;

	std::cout << "ù ��° ���ڸ� �Է��ϼ���: ";
	std::cin >> x;

	std::cout << "�� ��° ���ڸ� �Է��ϼ���: ";
	std::cin >> y;

	if (x > y) {
		std::cout << "ù ��° ���ڰ� �� Ů�ϴ�." << std::endl;
	}
	else if (x < y) {
		std::cout <<"�ι�° ���ڰ� �� Ů�ϴ�." << std::endl;

	}
	else {
		std::cout << "�� ���ڴ� �����ϴ�." << std::endl;
	}
	
	return 0;

}