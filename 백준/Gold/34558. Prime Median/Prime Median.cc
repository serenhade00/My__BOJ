#include <bits/stdc++.h>
#define MAX 1000001
#define X first
#define Y second

using namespace std;

int num[MAX+1];
pair<int,int> v[MAX+1];
vector<int> prime;

void solve()
{
    for(long long i = 2; i <= sqrt(MAX); i++)
    {
        for(long long j= i+i; j <= MAX; j=j+i)
        {
            num[j] = 1;
        }
    }
    for(int i=1; i<=MAX; i++)
    {
        if(!num[i])
            prime.push_back(i);
    }
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, a, b;
    cin >> n; 
    for(int i=0; i<n; i++)
    {
        cin >> a >> b;
        v[i].X = a, v[i].Y = b;
    }
    solve();
    int len = prime.size();

    for(int i=0; i<n; i++)
    {
        auto a_it = lower_bound(prime.begin(), prime.end(), v[i].X);
        int a_idx = a_it - prime.begin();
        auto b_it = lower_bound(prime.begin(), prime.end(), v[i].Y);
        int b_idx = b_it - prime.begin();
        if(prime[b_idx] == v[i].Y)
            b_idx++;

        if(((b_idx - a_idx) % 2 == 0) || a_idx == b_idx)
            cout << -1 << '\n';
        else
            cout << prime[(a_idx+b_idx) / 2] << '\n';
    }
}