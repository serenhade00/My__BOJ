#include <iostream>
#define ll long long
using namespace std;

int main(void)
{
	ll N, i, cnt = 0;
	char arr[10101] = { 0 }, find;

	cin >> N;
	for (i = 0; i < N; i++) cin >> arr[i];
	cin >> find;

	for (i = 0; i < N; i++)
		if (arr[i] == find)
			cnt++;
	cout << cnt;
}