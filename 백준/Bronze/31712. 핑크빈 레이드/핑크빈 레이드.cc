#include <iostream>
#define ll long long
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0); 
    cin.tie(0);
	ll Cu, Cd, Cp, Du, Dd, Dp, H, i;

	cin >> Cu >> Du >> Cd >> Dd >> Cp >> Dp >> H;
	for (i = 0;; i++)
	{
		if (i % Cu == 0) H -= Du;
		if (i % Cd == 0) H -= Dd;
		if (i % Cp == 0) H -= Dp;
		if (H <= 0) break;
	}
	cout << i;
}