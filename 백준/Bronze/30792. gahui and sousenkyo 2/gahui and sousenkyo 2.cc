#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0);
	int N, i, x, arr[20202] = { 0 };
	cin >> N >> x; arr[0] = x;
	for (i = 1; i < N; i++) cin >> arr[i];
	sort(arr, arr + N);
	for (i = 0; i < N; i++)
	{
		if (arr[i] == x)
			cout << N - i;
	}
}