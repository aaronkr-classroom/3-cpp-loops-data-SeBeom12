//chp 2-6

#include <iostream>

int main() {
	int rows, cols,j, i;

	std::cout << "���簢���� ���� ���̸� �Է��Ͻÿ�.";
	std::cin >> rows;

	std::cout << "���簢���� ���� ���̸� �Է��Ͻÿ�.";
	std::cin >> cols;

	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			std::cout << "*";
		}
		std::cout << std::endl;
	}
	
	return 0;





}