#include <iostream>
using namespace std;

int dis2(int x1, int y1, int x2, int y2)
{
	return (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
}

int main(void)
{
	int t, k, x, y, i, cnt = 0, X, Y;
	cin >> t >> k >> x >> y;
	for (i = 0; i < t; i++)
	{
		cin >> X >> Y;
		if (k * k < dis2(x, y, X, Y))
			cnt++;
	}
	cout << cnt;
}