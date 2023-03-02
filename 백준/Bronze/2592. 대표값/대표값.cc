#include <bits/stdc++.h>

using namespace std;

int freq[1001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int num, sum = 0, mx = 0;
    for(int i=0; i<10; i++)
    {
        cin >> num;
        freq[num]++;
        sum += num;
        mx = max(mx, num);
    }
    
    int mx_freq = 0, mx_val;
    for(int i=1; i<=mx; i++)
    {
        if(freq[i] > mx_freq)
        {
            mx_freq = freq[i];
            mx_val = i;
        }
    }
    cout << sum / 10 << '\n' << mx_val;
}