#include <iostream>
using namespace std;

int N;
int ans, m;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	while (N % 3) N -= 2, ans++;
	m = N / 3;

	cout << ans << ' ' << m;
}