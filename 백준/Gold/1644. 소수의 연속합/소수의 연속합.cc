#include <bits/stdc++.h>

using namespace std;

int num[4000001];
int prime[300001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    for(long long i = 2; i <= n; i++)
    {
        for(long long j= i+i; j <= n; j=j+i)
        {
            num[j] = 1;
        }
    }
    int idx = 0;
    for(int i=2; i<=n; i++)
    {
        if(!num[i])
        {
            prime[idx] = i;
            idx++;
        }
    }
    int cnt = 0;
    int st = 0, en = 0;
    
    int sum = prime[st];
    while(prime[st] <= n)
    {

        if(sum < n)
        	sum += prime[++en];
        else if(sum > n)
        	sum -= prime[st++];
        else
        {
            sum += prime[++en]-prime[st++];
            cnt++;
        }
    	
    	if(!prime[st] || !prime[en])
    		break;
    }
    cout << cnt;
    
}