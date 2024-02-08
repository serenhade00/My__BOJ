#include<iostream>
#include<string>
using namespace std;
int main() {
	int n, s=1, q=0;
	char ch[26];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ch[i];
	}
	for (int i = 0; i < n; i++) {
		if (ch[i] == ch[i + 1])
			s;
		else {
			s++;
		}
	}
	cout << s;
}