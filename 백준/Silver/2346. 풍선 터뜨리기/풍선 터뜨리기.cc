#include <bits/stdc++.h>

using namespace std;

int num[1001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, idx = 0;
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> num[i];

    cout << 1 << ' ';
    for(int k=0; k<n-1; k++)
    {
        int move = num[idx];
        int cnt = 0;
        num[idx] = 0;
        while(1)
        {
            if(move > 0)
                idx = (idx+1) % n;
            else if(move < 0)
                idx = (idx+n-1) % n;
            if(!num[idx])
                continue;
            cnt++;
            if(cnt == abs(move))
                break;
        }
        cout << idx+1 << ' ';
    }
}