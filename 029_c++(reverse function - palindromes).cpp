#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>   // ::tolower

bool isWord(std::string);

int main()
{
    std::string word, wordCopy;

    std::cout << "Please enter your word: ";
    std::cin >> word;

    if (isWord(word)) {
        transform(word.begin(), word.end(), word.begin(), ::tolower);

        wordCopy = word; // copied to another variable for comparison.

        reverse(word.begin(), word.end());

        if(word == wordCopy)
            std::cout << word << " is a palindrome!";
        else
            std::cout << word << " is " << wordCopy << " backward. Not a palindrome!";
    }
    else {
        std::cout << "Invalid word. Please restart.";
    }
    return 0;
}

//**********************************************************************************
// Definition of function isWord. This function accepts a string argument and loops*
// to check any of the elements in the string are digits. If they are, the function*
// returns false and the palidrome test is not executed.                           *
//**********************************************************************************

bool isWord(std::string str) {

    bool test = true;

    for(int i = 0; i < str.length(); i++) {
        if(isdigit(str.at(i)))
            test = false;
    }

    return test;
}
