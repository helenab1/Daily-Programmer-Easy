#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main(int argc, const char** argv) {

	// I'm guessing this checks if you don't have 2 arguments and gives this error...
	// but where does this error display?
	if (argc != 2) {
		std::cerr << "Usage: count <file>" << std::endl;
		return EXIT_FAILURE;
	}

	std::ifstream file(argv[1]);
	std::string str;
	std::stringstream ss;
	std::size_t lines, words;
	lines = words = 0u;	// ??

	while (std::getline(file, str)) {
		++lines;
		ss.str(str);
		ss.clear();
		while (ss >> str) {
			++words;
		}
	}

	std::cout << "lines: " << lines << "\nwords: " << words << std::endl;
	return EXIT_SUCCESS;

	// I don't understand this at all, why does nothing display? How does it know where the file is?
	// what even are those arguments? I am keeping to refer back to understand one day.

}