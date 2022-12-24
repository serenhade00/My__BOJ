#include <bits/stdc++.h>

using namespace std;

long long height[100001];

long long solve(int left, int right)
{
    if(left == right)
        return height[left];
    
    int mid = (left+right)/2;
    
    long long ret = max(solve(left, mid), solve(mid+1, right));
    
    int lo = mid, hi = mid+1;
    long long tmp_high = min(height[lo], height[hi]);
    ret = max(ret, tmp_high*2);
    
    while(left < lo || hi < right)
    {
        if(hi < right && (lo == left || height[lo-1] < height[hi+1]))
        {
            hi++;
            tmp_high = min(tmp_high, height[hi]);
        }
        else
        {
            lo--;
            tmp_high = min(tmp_high, height[lo]);
        }
        ret = max(ret, tmp_high*(hi-lo+1));
    }
    return ret;
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
   
    for(int i=1; i<=n; i++)
        cin >> height[i];
       
    cout << solve(1, n) << '\n';
}