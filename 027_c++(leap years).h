#include <iostream>

void isLeapYear(int);

int main () {

	int y;
	
	std::cout << "Keep entering years or enter negative to quit: ";
	std::cin >> y;
	
	while(y >= 0) {
		
		std::cout << "Century: " << (y + 99)/100 << std::endl;
		std::cout << "Leap Year: ";
		isLeapYear(y);
		
		std::cout << "Enter year: ";
		std::cin >> y;
	}
	
return 0;
	
}

void isLeapYear (int year) {
	if(year % 4 != 0)
		std::cout << "No" << std::endl;
	else if(year % 100 != 0)
		std::cout << "Yes" << std::endl;
	else if(year % 400 != 0)
		std::cout << "No" << std::endl;
	else 
		std::cout << "Yes" << std::endl;
	
}