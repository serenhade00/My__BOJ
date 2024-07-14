#include <iostream>
#define ll long long
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	ll N, K;
	cin >> N >> K; N--;
	while (N--) K /= 2;
	cout << K;
}