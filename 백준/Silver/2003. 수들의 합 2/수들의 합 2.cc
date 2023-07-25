#include <bits/stdc++.h>

using namespace std;

int num[10001];
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    int cnt = 0;
    int sum = 0;
    int st = 0, en = 0;
    cin >> n >> m;
    for(int i=0; i<n; i++)
        cin >> num[i];
    
    sum = num[0];
    for(st=0; st<n; st++)
    {
        while(en < n && sum < m)
        {
            en++;
            if(en != n)
                sum += num[en]; 
        }
        if(sum == m)
            cnt++;

        sum -= num[st];
    }
    cout << cnt;
}