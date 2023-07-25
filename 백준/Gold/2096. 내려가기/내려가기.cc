#include <bits/stdc++.h>

using namespace std;

int dp_max[2][4];
int dp_min[2][4];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, st_a, st_b, st_c, a, b, c;
    cin >> n;
    for(int j=1; j<=3; j++)
    {
    	cin >> dp_max[0][j];
    	dp_min[0][j] = dp_max[0][j];
    }
    
    for(int i=2; i<=n; i++)
    {
        cin >> a >> b >> c;
        dp_max[1][1] = max(dp_max[0][1], dp_max[0][2]) + a;
        dp_max[1][2] = max({dp_max[0][1], dp_max[0][2], dp_max[0][3]}) + b;
        dp_max[1][3] = max(dp_max[0][2], dp_max[0][3]) + c;
        
        dp_min[1][1] = min(dp_min[0][1], dp_min[0][2]) + a;
        dp_min[1][2] = min({dp_min[0][1], dp_min[0][2], dp_min[0][3]}) + b;
        dp_min[1][3] = min(dp_min[0][2], dp_min[0][3]) + c;
        
        dp_max[0][1] = dp_max[1][1], dp_max[0][2] = dp_max[1][2], dp_max[0][3] = dp_max[1][3];
        dp_min[0][1] = dp_min[1][1], dp_min[0][2] = dp_min[1][2], dp_min[0][3] = dp_min[1][3];
    }
    cout << max({dp_max[0][1], dp_max[0][2], dp_max[0][3]}) << ' ';
    cout << min({dp_min[0][1], dp_min[0][2], dp_min[0][3]}) << ' ';

}