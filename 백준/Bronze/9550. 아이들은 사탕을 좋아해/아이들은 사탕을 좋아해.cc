#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int n, k, val, sum = 0;
        cin >> n >> k;
        
        for(int j=0; j<n; j++)
        {
            cin >> val;
            sum += val / k;
        }
        cout << sum << '\n';
    }
}