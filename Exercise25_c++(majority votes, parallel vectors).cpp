#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;

int main() {

	vector<int> candVotes;
	vector<string> candNames;
	string name, sline;
	int votes;

	cout << "Enter the candidate first name and number of votes separated by a space. Press 0 when done." << endl;

	// Stores names and votes in two vectors at the same time using stringstream and parallel vectors.
	while (sline != "0") {
		getline(cin, sline);
		stringstream(sline) >> name >> votes;
		candNames.push_back(name);
		candVotes.push_back(votes);
	}

	// Getting rid of the last value, 0 seems to add the last value as its number of votes.
	candNames.pop_back();
	candVotes.pop_back();

	cout << endl;

	// Find the majority.
	int majority = 0;
	int totalVotes = 0;
	int noMajority = 0;

	for (int i = 0; i < candVotes.size(); i++) {
		totalVotes = totalVotes + candVotes[i];
	}

	// Majority is half of all the votes plus one.
	majority = (totalVotes / 2) + 1;
	cout << "The number of votes it takes to win the majority will be: " << majority << endl;

	// Display candidate names and votes in the parallel vectors.
	for (int i = 0; i < candNames.size(); i++) {
		cout << candNames[i] << "\t" << candVotes[i] << endl;
	}

	// Then, see if any candidates got the majority.
	for (int i = 0; i < candNames.size(); i++) {
		if(candVotes[i] >= majority)
			cout << candNames[i] << " won the majority with " << candVotes[i] << " votes!" << endl;
		else if(candVotes[i] < majority)
			noMajority++;
	} 

	// Checking if there was no winner by adding each candidate that got less than the majority to a variable in the above loop,
	// then checking here if that variable is equal to the size of the vector (which means no one got it).
	if(noMajority == candNames.size())
		cout << "There was no winner." << endl;
	
	

	
	system("pause");

	return 0;

}