#include <iostream>
using namespace std;

int S, pS, M, pM;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> S >> pS >> M >> pM;
	S = pS - S, M = pM - M;

	while (S != M) {
		if (S < M) S += pS;
		else M += pM;
	}
	cout << S;
}