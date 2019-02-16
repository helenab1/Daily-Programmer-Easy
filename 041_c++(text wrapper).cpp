/* Write a program that will accept a sentence as input and then output that sentence surrounded by some type of an 
ASCII decoratoin banner. Bonus: If the sentence is too long, move words to the next line. */
#include <iostream>
#include <string>

void makeRow(int);

int main() {

	std::string test;
	std::cout << "Enter string: ";
	getline(std::cin, test);
	int len = test.length();

	makeRow(len);
	std::cout << std::endl;
	std::cout << "* " << test << " *" << std::endl;
	makeRow(len);

	while (std::cin);
	return 0;
}

void makeRow(int strLen) {
	
	for (int i = 0; i < (strLen + 4); i++) {
		std::cout << "*";
	}
}

