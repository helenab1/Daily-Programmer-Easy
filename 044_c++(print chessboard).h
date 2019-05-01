#include <iostream>

int main() {
	
	const int ROWS = 2;
	const int COLS = 5;
	
	// Step 1: Print top row.
	for(int i = 0; i < (COLS * COLS); i++)
		std::cout << "*";
	
	// Test: Should print 25 stars.
	// *************************
	// Success!
}