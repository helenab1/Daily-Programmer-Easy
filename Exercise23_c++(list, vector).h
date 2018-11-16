// Program that lets user enter a list then splits that list into two lists.
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {

	vector<string> list;
	string listEntry;
	int listSize, half, remainder, secondHalf;

	cout << "Please enter your shopping list items. Enter 0 when done." << endl;

	// Gets list entries, user enters 0 to escape.
	while(listEntry != "0") {
		cin >> listEntry;
		list.push_back(listEntry);
	}

	// Pop.back gets rid of 0 at end of vector.
	list.pop_back();
	listSize = list.size();

	// Determining half of the elements and dealing with possible remainder.
	half = listSize / 2;
	remainder = listSize % 2;
	
	// Display list with two loops.
	for (int i = 0; i < half; i++) {
		cout << list[i];
		cout << "\t";
		cout << list[half + i] << endl;
	}

	// Display remainder
	if(remainder)
		cout << "\t" << list.back() << endl;
	
	system("pause");

	return 0;

}


