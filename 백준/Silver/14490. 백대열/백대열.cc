#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	string s;
	cin >> s;
    int a, b;
    for (int i = 0; i < s.size(); i++) {
		if (s[i] == ':') {							
			a = stoi(s.substr(0, i));					
			b = stoi(s.substr(i + 1));
			break;										
		}
	}
    cin >> a >> b;
    cout << a / __gcd(a, b) << ':' << b / __gcd(a, b);
} 