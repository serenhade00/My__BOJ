#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    
	int a, sum = 91;
	cin >> a;
	sum += a;
	cin >> a;
	sum += 3*a;
	cin >> a;
	sum += a;
	cout << "The 1-3-sum is " << sum;
}