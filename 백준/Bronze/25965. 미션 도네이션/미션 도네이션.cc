#include <iostream>

using namespace std;

long long mission[101][3];

int main(void)
{
    int t;
    cin >> t;
    
    for(int i=0; i<t; i++)
    {
        int n, k, d, a;
        long long ans = 0;
        cin >> n;
        for(int j=0; j<n; j++)
            cin >> mission[j][0] >> mission[j][1] >> mission[j][2];
        cin >> k >> d >> a;
        
        for(int j=0; j<n; j++)
        {
            long long sum = k*mission[j][0] - d*mission[j][1] + a*mission[j][2];
            if(sum > 0)
                ans += sum;
        }
        cout << ans << '\n';
    }
}