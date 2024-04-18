#include <bits/stdc++.h>
using namespace std;
int main() {
	int t, k, a;
	cin >> t >> k >> a;
	cout << (k > (t % (k + a)) ? 1 : 0);
}