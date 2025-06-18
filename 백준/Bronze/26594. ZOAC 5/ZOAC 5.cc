#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	int cnt=1;
	
	cin >> str;
	
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == str[i+1]) {
			cnt += 1;
		}
		else {
			break;
		}
	}

	cout << cnt;
	return 0;
}