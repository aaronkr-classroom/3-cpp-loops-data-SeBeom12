//chp2ex5square
#include <iostream>

using std::cout;	using std::cin;
using std::endl;

int main() {
	cout << "what size 정사각형?";

	int size;
	cin >> size;

	for (int i = 0; i <= size; i++) {

		for (int j = 0; j <= size; j++); {
			cout << "*";
		}


		cout << endl;
		
	}
	return 0;
}
