#include <iostream>
#include <vector>
#include <algorithm>

int main () {
	
	std::vector<int> list = {1, 3, 4, 7, 8, 4};
	
	// Sorts list in order so output is 1, 3, 4, 4, 7, 8.
	std::sort(list.begin(), list.end());
	
	// Then finds the duplicates.
	for(int i = 0; i < list.size(); i++)
		if(list[i] == list[i+1]) {
			std::cout << list[i] << " repeats more than once starting at position ";
			std::cout << i << "." << std::endl;
		}
	
return 0;

}
	