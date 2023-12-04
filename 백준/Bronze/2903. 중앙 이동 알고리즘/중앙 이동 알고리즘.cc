#include <iostream>
using namespace std;
int main() {
	int n, res = 0;
	int aP = 4, dP = 2;

	cin >> n;
	for (int i = 0; i < n; i++) {
		res = (aP * 4) - (dP * 4) + 1;
		aP = res;
		dP = dP * 2 - 1;		
	}
	cout << res << '\n';
	return 0;
}