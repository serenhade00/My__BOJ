#include <bits/stdc++.h>
using namespace std;

int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	if (!(cin >> s)) return 0;

	string t = "UAPC", removed;
	size_t j = 0;
	for (char c : t) {
		if (j < s.size() && c == s[j]) j++;
		else removed.push_back(c);
	}
	cout << removed;
}