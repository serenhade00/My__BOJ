#include <bits/stdc++.h>

using namespace std;

int num[21];
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

	int n, p, q, r, s, a1, sum = 0;
    cin >> n >> p >> q >> r >> s >> a1;
    num[1] = a1;
    sum += a1;
    for(int i=2; i<=n; i++)
    {
    	if(i % 2)
    		num[i] = r*num[i/2]+s;
    	else 
    		num[i] = p*num[i/2]+q;
    	sum += num[i];
    }
    cout << sum;
}