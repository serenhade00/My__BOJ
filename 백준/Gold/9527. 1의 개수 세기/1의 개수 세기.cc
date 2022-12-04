#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll a, b;

//1의 개수 구하기
ll num_of_one(ll x) {
	ll countBit = 0;
	ll pattern = 2;//자릿수 패턴의 길이(01)
	
    // 2^0 = 01, 2^1 = 0011, 2^2 = 00001111....
	while (pattern <= x) {
		countBit += (x / pattern) * (pattern / 2); // 각 자릿수 몫 1의 수 계산
		//절반 이후
		if ((x % pattern)>=(pattern/2)) countBit += ((x % pattern) - (pattern / 2)+1); // 각 자릿수 나머지 1의 수 계산
		pattern *= 2;//패턴 길이 증가
	}
	//맨 앞자리
	if ((x % pattern) >= (pattern / 2)) countBit += ((x % pattern) - (pattern / 2)+1);
	return countBit;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    
    cin >> a >> b;
	cout << num_of_one(b) - num_of_one(a-1) << "\n";
	return 0;
}