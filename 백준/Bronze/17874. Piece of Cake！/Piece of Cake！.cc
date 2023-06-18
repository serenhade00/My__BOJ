#include <iostream>

using namespace std;

int main()
{
	long long n = 0;
	long long h = 0;
	long long v = 0;
	cin >> n >> h >> v;
	h = h > (n - h) ? h : (n - h);
	v = v > (n - v) ? v : (n - v);
	cout << 4 * h * v;
}