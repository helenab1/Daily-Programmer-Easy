#include <iostream>

int main() {
	
	const int ROWS = 2;
	const int COLS = 5;
	
	int count = 0; // counting blanks and stars
	
	// Step 1: Print top row.
	for(int i = 0; i < ((COLS * COLS) + ROWS); i++)
		std::cout << "*";
	
	// Test: Should print 27 stars. (25 for middle and 2 for border)
	// ***************************
	// Success!
	
	std::cout << std::endl;
	
	/*Step 2: Print one star on each side, with 25 blanks in the middle
	for(int i = 0; i < 1; i++) {
		std::cout << "*";
		for(int j = 0; j < (COLS*COLS); j++) {// inner loop stuff
			std::cout << " ";
		}
		std::cout << "*";
	}*/
	
	// ***************************
	// *                         * 
	// Success!
	
	for(int i = 0; i < ROWS; i++) // two rows
        for(int y = 0; y < COLS; y++)
        {
            for(int j = 0; j < COLS; j++)
                for(int z = 0; z < COLS; z++)
                    std::cout << (((j+i)%2) ?  "#" : " ");
					// If j+i's remainder when divided by two is greater than 0, print '#', or else print " "
            std::cout << "\n";
        }   
	
	// Now that I have the formula I need to put this within stars
			
}