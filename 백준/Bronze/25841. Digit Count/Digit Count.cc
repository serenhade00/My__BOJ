#include <iostream>
#include <string>
using namespace std;

int L, R; char dgt;
int cnt[128];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> L >> R >> dgt;
	for (int i = L; i <= R; i++) {
		string s = to_string(i);
		for (auto& l : s) cnt[l]++;
	}
	cout << cnt[dgt];
}