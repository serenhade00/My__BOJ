#include <iostream>
using namespace std;

int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int x, y; cin >> x >> y;
	cout << (x + y - 1) % 12 + 1;
}