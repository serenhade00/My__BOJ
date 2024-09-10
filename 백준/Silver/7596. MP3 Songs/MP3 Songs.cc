#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);	

	int num = 0;
	while (1) {
		int list;
		cin >> list;
		if (list == 0) { break; }
		cin.ignore();

		string st[201];
		for (int i = 0; i < list; i++) {
			getline(cin, st[i]);
		}
		sort(st, st + list);

		num++;
		cout << num << endl;
		for (int i = 0; i < list; i++) {
			cout << st[i] << endl;
		}
	}
}