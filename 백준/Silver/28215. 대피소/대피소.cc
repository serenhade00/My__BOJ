#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;

pair<int,int> coord[51];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, k, ans = 1000001;
    cin >> n >> k;
    
    vector<int> num(n-k, 0);
    for(int i=0; i<n; i++)
        cin >> coord[i].X >> coord[i].Y;
    
    for(int i=0; i<k; i++)
        num.push_back(1);
    
    do{
        vector<int> tmp;
        int tmp_mx = 0; 
        for(int i=0; i<n; i++)
        {
            if(num[i])
                tmp.push_back(i);
        }
        for(int i=0; i<n; i++)
        {
            int tmp_mn = 1000001;
            if(!num[i])
            {
               for(int j=0; j<k; j++)
                   tmp_mn = min(tmp_mn, abs(coord[i].X - coord[tmp[j]].X) + abs(coord[i].Y - coord[tmp[j]].Y));
               tmp_mx = max(tmp_mx, tmp_mn);
            }
        }
        ans = min(ans, tmp_mx);
    }while(next_permutation(num.begin(), num.end()));
    cout << ans;
}