#include <iostream>
using namespace std;

int main()
{
	long long K, D1, D2;
	cin >> K >> D1 >> D2;
	long long result_t = (2 * K + D1 - D2) * (2 * K - D1 + D2);
	double result = (double)result_t / 4.0;
	
	cout << result;
}