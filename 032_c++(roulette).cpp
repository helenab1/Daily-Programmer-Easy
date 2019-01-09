// Roulette game program. Was getting an error on the even/odd lose where the sentence just trailed off but now it seems to be working... can't reproduce it so it seems to be working well
// besides that it accepts 37 as input but I haven't had many creative ideas about getting around the "00" input in Roulette.

#include <iostream>
#include <iomanip>
#include <random>
#include <string>

double numberBet(double, double);
double evenOddBet(double, double);

int main () {

    double wallet = 50.00, bet;
    char gameType;

    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "Welcome to ROULETTE!\nYou currently have " << wallet << " dollars.";

    while(wallet > 0) {

        std::cout << "\nHow much would you like to bet? ";
        std::cin >> bet;

        while(bet > wallet) {
            std::cout << "You only have $" << wallet << ". Please make an appropriate bet.";
            std::cin >> bet;
        }

        std::cout << "Would you like to bet even/odd or a specific number? (Type n for number and e for even/odd) ";
        std::cin >> gameType;

        switch(gameType) {
            case 'n': wallet = numberBet(bet, wallet);
                      std::cout << "\nYou now have $" << wallet << " dollars.";
                      break;
            case 'e': wallet = evenOddBet(bet, wallet);
                      break;
            default: std::cout << "Invalid game type. Try again.";
        }
    }

   while(wallet != 0)
    
    return 0;
}

/**********************************************************
 * Definition of function numberBet.                      *
 * Takes the player's bet & wallet and generates a        *
 * random number on the wheel. Returns the new wallet     *
 * amount after winning or losing.                        *
//********************************************************/

double numberBet(double bet, double wallet) {
    
    std::string input;
    int num;
    
    std::cout << "Please choose your number." << std::endl;
    std::cin >> input;

    if(input == "00")
        num = 37;
    else
        num = std::stoi(input);

    // Bad input checking - still won't error check if they try '37' from the get-go, it will accept it.
    if(num < 0 || num > 37)  {
        std::cout << "Invalid number. Please restart.";
        return 0;
    }

    // Get the random number between 0 and 37.
    std::random_device rd;
    std::mt19937 eng(rd());
    std::uniform_int_distribution<> distr(0, 37);

    // Check if win.
    std::cout << "\nThe ball lands on... ";
    if(distr(eng) == 37)
        std::cout << "00!";
    else
        std::cout << distr(eng) << "!"; 

    if(num == distr(eng)) {
        std::cout << "\nYOU WIN $" << (35*bet) << "!";
        wallet = wallet + (35*bet);
        return wallet;
    }
    else {
        std::cout << "\nYOU LOSE $" << (bet) << "!";
        wallet = (wallet - bet);
        return wallet;
    }
}

/**********************************************************
 * Definition of function evenOddBet.                     *
 * Takes the player's bet & wallet and generates a        *
 * random number on the wheel between 1 and 2. Returns    *
 * the new wallet amount after winning or losing.         *
//********************************************************/

double evenOddBet(double bet, double wallet) {

    std::string input;

    std::cout << "Type even or odd to place your bet.";
    std::cin >> input;

    // Generates either a 1 or 2 (odd or even.)
    std::random_device rd;
    std::mt19937 eng(rd());
    std::uniform_int_distribution<> distr(1, 2);

    std::cout << distr(eng);

    // Check if win.
    std::cout << "\nThe ball lands on... ";
    if(distr(eng) % 2 != 0) {
        std::cout << "Odd!";
        if(input == "odd") {
            std::cout << "\nYOU WIN $" << bet << "!";
            wallet = wallet + bet;
            return wallet; 
        }
        else {
            std::cout << "\nYOU LOSE $" << bet << "!";
            wallet = wallet - bet;
            return wallet;
        }
    }

    if(distr(eng) % 2 == 0) {
        std::cout << "Even!"; 
        if(input == "even") {
            std::cout << "\nYOU WIN $" << bet << "!";
            wallet = wallet + bet;
            return wallet; 
        }
        else {
            std::cout << "\nYOU LOSE $" << bet << "!";
            wallet = wallet - bet;
            return wallet;
        }
    }
   
        
    

}