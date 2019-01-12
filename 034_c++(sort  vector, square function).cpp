// Basic programming challenge to input three numbers and return the squares of the two highest numbers.
// I did this by sorting the three numbers in a vector and sending the two last elements of that vector to the squareMe function.
#include <iostream>
#include <vector>
#include <algorithm>    // for std::sort

void squareMe(int, int);

int main () {
    
    int num;
    std::vector<int> threeNums;

    std::cout << "Enter three numbers: ";

    for(int i = 0; i < 3; i++) {
        std::cin >> num;
        threeNums.push_back(num);
    }
    
    std::sort (threeNums.begin(), threeNums.end());

    // Send the two highest numbers to squareMe.
    squareMe(threeNums[1], threeNums[2]);
      
return 0;

}

void squareMe (int num1, int num2) {
    std::cout << num1 << " squared is " << num1*num1 << std::endl;
    std::cout << num2 << " squared is " << num2*num2 << std::endl;
}