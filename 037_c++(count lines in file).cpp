#include <iostream>
#include <string>
#include <fstream>

int main() {

	int numOfLines = 0;
	std::string str;
	std::fstream dataFile;
	dataFile.open("countMe.txt", std::ios::in);

	// eof is a flag set by all standard input operation when the end-of-file 
	// is reached in the sequence associated with the stream.
	if (dataFile) {
		while (!dataFile.eof()) {	
			getline(dataFile, str);
			numOfLines++;
		}
		dataFile.close();
		dataFile.clear();
	}

	std::cout << numOfLines;

	while (std::cin);
	return 0;
}