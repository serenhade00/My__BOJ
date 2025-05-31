#include <iostream>
using namespace std;
int main(void)
{
	ios_base::sync_with_stdio(0); 
    cin.tie(0);
	int x, i;
	cin >> x;
	if (x == 0) cout << 1;
	else if (x == 1) cout << 0;
	else
	{
		if (x % 2 == 1) cout << 4;
		for (i = 0; i < x / 2; i++)cout << 8;
	}
}