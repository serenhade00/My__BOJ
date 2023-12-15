#include <iostream>
using namespace std;

int main()
{
	int N, M, result;
	cin >> N >> M;
	result = N;
	while (N / M != 0)
	{
		N /= M;
		result += N;
	}
	cout << result;
}