#include <iostream>
#include <string>

const int SIZE = 6;
void singSong(const std::string arr[][SIZE]);

int main() {

	const std::string mcDFarm[SIZE][SIZE] = {{"Cow", "Moo"}, {"Chicken", "Cluck"},
		{"Turkey", "Gobble"}, {"Kangaroo", "G'day mate"}, 
		{"T-Rex", "GAAAARGH!"}, {"Cat", "Meow"}};

	singSong(mcDFarm);

	while(std::cin);
	
	return 0;

}

void singSong(const std::string arr[][SIZE]) {
	
	int j = 0;
	for (int i = 0; i < SIZE; i++) {
		std::cout << "Old McDonald had a farm," << std::endl;
		std::cout << "and on this farm there was an " << arr[i][j] << std::endl;
		std::cout << "e-i e-i o!" << std::endl;
		std::cout << "With a " << arr[i][j+1] << " there and a " << arr[i][j+1] << " there," << std::endl;
		std::cout << "Old McDonald had a farm, e-i e-i o!" << std::endl;
	}
		
	
}

