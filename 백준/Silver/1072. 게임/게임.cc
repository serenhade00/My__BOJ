#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    long long x, y, mid;
    cin >> x >> y;
    long long init_avg = (y*100) / x ;
    if(init_avg >= 99)
    {
    	cout << -1;
    	return 0;
    }
    long long st = 0, en = x; 
    while(st+1 < en)
    {
        mid = (st+en)/2;
        if(((y+mid)*100 / (x+mid)) > init_avg)
            en = mid;
        else
            st = mid;     
    }
    cout << en;
}