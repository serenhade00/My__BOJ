#include <bits/stdc++.h>

using namespace std;

long long num[300001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    cin >> n >> m;
    
    for(int i=0; i<m; i++)
        cin >> num[i];
    
    int st = 1, en = *max_element(num, num+m);
    
    while(st+1 < en)
    {
        int mid = (st+en)/2;
        long long tmp = 0;
        for(int i=0; i<m; i++)
        {	
        	if(num[i] % mid == 0)
        		tmp += num[i] / mid;
        	else
        		tmp += (num[i] / mid) + 1;
        }
        
        if(tmp > n)
            st = mid;
        else
            en = mid;
    }
    cout << en;
}