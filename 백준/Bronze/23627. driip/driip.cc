#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	string s;
	cin >> s;
	if (s.length() >= 5 && s.substr(s.length() - 5, 5) == "driip") cout << "cute";
	else cout << "not cute";
}