#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int cnt = 0;
	int cur = 0;
	int sU, sD, h; 
    cin >> sU >> sD >> h;

	while (1) {
		cur += sU, cnt++;
		if (cur >= h) break;
		cur -= sD;
	}
	cout << cnt;
}