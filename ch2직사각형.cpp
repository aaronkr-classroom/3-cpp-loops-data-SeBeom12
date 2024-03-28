//chp 2-6

#include <iostream>

int main() {
	int rows, cols,j, i;

	std::cout << "직사각형의 세로 길이를 입력하시오.";
	std::cin >> rows;

	std::cout << "직사각형의 가로 길이를 입력하시오.";
	std::cin >> cols;

	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			std::cout << "*";
		}
		std::cout << std::endl;
	}
	
	return 0;





}