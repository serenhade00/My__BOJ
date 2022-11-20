#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a, b;
    int mx = 0;
    int sum = 0;
    cin >> a >> b;
    sum = b;
    mx = max(mx, sum);
 
    for(int i=1; i<4; i++)
    {
        int tmp_a, tmp_b;
        cin >> tmp_a >> tmp_b;
        
        sum -= tmp_a;
        sum += tmp_b;
        mx = max(mx, sum);
    }
    cout << mx;
}