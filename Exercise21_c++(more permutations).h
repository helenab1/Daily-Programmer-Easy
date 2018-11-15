#include <iostream>
#include <algorithm>
#include <iostream>

using namespace std;

int main () {
	
	string s;
	cout << "Enter a number ";
	cin >> s;
	
	next_permutation(s.begin(), s.end());
	cout << s << endl;
	
return 0;
	
}
