#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
vector<string> vec;
int main() {
	fastio;
	int n;
	string s;
	cin >> n;
	while (n--) {
		int a;
		cin >> a;
		while (a--) {
			cin >> s;
			if (n == 0) {
				vec.push_back(s);
			}
		}
	}
	cout << vec.size() << "\n";
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << "\n";
	}
}