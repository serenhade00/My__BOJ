#include <iostream>
#define ll long long
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0); 
    cin.tie(0);
	ll N, M, i, cnt = 0, tmp = 1;
	cin >> N >> M;
	cnt = 2 * N * M - N - M;
	while (cnt--)
	{
		tmp *= 3;
		tmp %= (ll)(1e9+7);
	}
	cout<<tmp;
}