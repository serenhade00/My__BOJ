#include <iostream>
#include <map>
#include <string>
using namespace std;

int N;
map<string, char> dict;
string code; int codelen;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	while (N--) {
		char c; string s; cin >> c >> s;
		dict.insert({ s,c });
	}

	cin >> code;
	codelen = code.length();
	for (int i = 0; i < codelen; i += 4) {
		string tmp = code.substr(i, 4);
		if (dict.count(tmp)) cout << dict[tmp];
		else cout << '?';
	}
}