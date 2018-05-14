#include <iostream>
using namespace std;

string caesar(string str, int n) {
	for(int i = 0; i < str.size(); i++) {
		if(str[i] == ' ') continue;
		if(str[i] + n > 122) str[i] += (-26 + n);
		else str[i] += n;
	}
	return str;
}
int main() {
	string str = "pybfvat gur qvfgnapr";
	for(int i = 1; i <= 26; i++) {
		cout << caesar(str, i) << endl;
	}
	return 0;
}
