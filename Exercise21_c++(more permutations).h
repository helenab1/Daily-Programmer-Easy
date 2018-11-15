#include <iostream>
#include <algorithm>
#include <iostream>

using namespace std;

int main () {
	
	string s;
	cin >> s;
	
	next_permutation(s.begin(), s.end());
	cout << s << endl;
	
return 0;
	
}
