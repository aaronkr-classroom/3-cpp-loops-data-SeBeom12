#include <iostream>

int main() {

	int x, y;

	std::cout << "첫 번째 숫자를 입력하세요: ";
	std::cin >> x;

	std::cout << "두 번째 숫자를 입력하세요: ";
	std::cin >> y;

	if (x > y) {
		std::cout << "첫 번째 숫자가 더 큽니다." << std::endl;
	}
	else if (x < y) {
		std::cout <<"두번째 숫자가 더 큽니다." << std::endl;

	}
	else {
		std::cout << "두 숫자는 같습니다." << std::endl;
	}
	
	return 0;

}