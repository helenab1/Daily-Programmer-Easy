#include <iostream>
#include <string>
#include <vector>
#include <random>

using std::string;

int main () {

    std::vector<string> questions {"Who is the cutest cat? ", "What is the best color? ", 
                                   "What is the best season of Buffy? "};
    std::vector<string> answers {"Selina", "purple", "three"};

    // Gets random numbers between 0 and 2.
    std::random_device rd;
    std::mt19937 eng(rd());
    std::uniform_int_distribution<> distr(0, 2);

    // Assigns each letter one of the random number.
    int j = distr(eng);
    int k = distr(eng);
    int l = distr(eng);

    // These two loops ensure no duplicates.
    while(k == j)
        k = distr(eng);

    while(l == k || l == j)
        l = distr(eng);

    // Now to ask the question.
    std::string myAnswer;

    std::cout << "Answer the questions correctly or type exit to give up." << std::endl;

    // Lots of repeating code and if-statement embarrassment to follow.
    while(myAnswer != answers[j]) {
        std::cout << questions[j];
        std::cin >> myAnswer;
        if(myAnswer == "exit")
            return 0;
    }

    while(myAnswer != answers[k]) {
        std::cout << questions[k];
        std::cin >> myAnswer;
        if(myAnswer == "exit")
            return 0;
    }

    while(myAnswer != answers[l]) {
        std::cout << questions[l];
        std::cin >> myAnswer;
        if(myAnswer == "exit")
            return 0;
    }
    

return 0;

}