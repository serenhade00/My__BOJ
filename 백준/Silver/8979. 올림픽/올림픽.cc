#include <bits/stdc++.h>

using namespace std;

tuple<int,int,int> t[1001];

void get_rank(int n, int a, int b, int c)
{
    sort(t, t+n);
    
    for(int i=0; i<n; i++)
    {
        int tmp1, tmp2, tmp3;
        tie(tmp1, tmp2, tmp3) = t[i];

        if(a == tmp1 && b == tmp2 && c == tmp3)
        {
            cout << i+1;
            return;
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, k, val1, val2, val3;
    cin >> n >> k;

    for(int i=0; i<n; i++)
    {
        int num, a, b, c;
        cin >> num >> a >> b >> c;
        t[i] = make_tuple(a, b, c);
        if(num == k)
            val1 = a, val2 = b, val3 = c;
    }
    
    get_rank(n, val1, val2, val3);
}