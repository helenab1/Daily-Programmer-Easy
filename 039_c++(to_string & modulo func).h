#include <iostream>
#include <string>

std::string isDivBy3(int);
std::string isDivBy5(int);
std::string isNeither(int);

int main () {
	
	std::string temp = "";
	int sz;
	std::cout << "Enter your number to count to: ";
	std::cin >> sz;
	
	for(int i = 1; i <= sz; ++i) {
		
		temp = isDivBy3(i);
		std::cout << temp;
		temp = isDivBy5(i);
		std::cout << temp;
		temp = isNeither(i);
		std::cout << temp;
		std::cout << std::endl;
		
	}
	
	return 0;
}

std::string isDivBy3(int num) {
	
	if(num % 3 == 0) {
		std::string str = "Fizz";
		return str;
	}
	else
		return "";
}

std::string isDivBy5(int num) {
	
	if(num % 5 == 0) {
		std::string str = "Buzz";
		return str;
	}
	else
		return "";
}

std::string isNeither(int num) {
	
	if(num % 3 != 0 && num % 5 != 0) {
		std::string str = std::to_string(num);
		return str;
	}
	else
		return "";
}