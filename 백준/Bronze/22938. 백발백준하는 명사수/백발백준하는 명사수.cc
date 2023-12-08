#include<iostream>
#include<algorithm>
using namespace std;

int main() 
{
	long long x1, x2, y1, y2, r1, r2;
	cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
	if ((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) >= (r1 + r2) * (r1 + r2)) cout << "NO";
	else cout << "YES";
	return 0;
}