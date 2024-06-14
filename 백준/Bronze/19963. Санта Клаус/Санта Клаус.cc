#include <iostream>
using namespace std;

int N, M, K;
int arr[101];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> M >> K;
	cout << N - M - K << '\n';
	while (M--) {
		int x; cin >> x;
		arr[x] = 1;
	}
	while (K--) {
		int x; cin >> x;
		arr[x] = 1;
	}
	
	for (int i = 1; i <= N; i++) {
		if (arr[i] == 0) cout << i << ' ';
	}
}