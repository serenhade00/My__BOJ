#include <iostream>

using namespace std;

int main() 
{
	int N, M, K;
	cin >> N >> M >> K;

	cout << ((M - 1) + (K - 3) % N + N) % N + 1;
}