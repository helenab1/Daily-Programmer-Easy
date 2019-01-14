// Program that prints a right triangle attempting to use all numbers
// from 1 to that number. Annoying loops problem.
#include <iostream>
#include <vector>

int main() {

	int num, upper, rows = 0;
	std::vector<int> myVector;

	std::cout << "Enter number:";
	std::cin >> num;
	std::cout << "Output:" << std::endl;

	for (int i = 1, j = 1; j <= num; i++, j += i, rows++) {
		upper = j;
	}

	for (int i = upper, j = rows; i > 0; j--) {
		for (int k = 0; k < j; i--, k++) {
			myVector.push_back(i);
		}
		for (int k = (myVector.size() - 1); k >= 0; k--) {
			std::cout << myVector[k] << " ";
		}
		std::cout << std::endl;
		myVector.clear();
	}

return 0;

}