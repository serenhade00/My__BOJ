#include <bits/stdc++.h>

using namespace std;

string s[51];
char alpha[21] = {'b', 'd', 'e', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'o', 
                  'p', 'q', 'r', 's', 'u', 'v', 'w', 'x', 'y', 'z'};

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int num[21] = {0};
    int n, k, mx = 0;
    cin >> n >> k;
    
    for(int i=0; i<n; i++)
        cin >> s[i];
    
    if(k < 5)
    {
        cout << 0;
        return 0;
    }
    
    for(int i=k-5; i<21; i++)
        num[i] = 1;
    do
    {
        int cnt = 0;
        vector<int> cur;
        for(int i=0; i<21; i++)
        {
            if(!num[i])
            	cur.push_back(i);
        }
        for(int i=0; i<n; i++)
        {
            int len = s[i].size();
            if(len == 8)
            {
            	cnt++;
            	continue;
            }
            bool op = 1;
            len -= 4;
            for(int j=4; j<len; j++)
            {
            	op = 1;
                for(auto now : cur)
                {
                	if(alpha[now] == s[i][j])
                		op = 0;
                }
                if(s[i][j] == 'a' || s[i][j] == 'c' || s[i][j] == 'i' || s[i][j] == 'n' || s[i][j] == 't')
                    op = 0;
                if(op)
                	break;
            }
            if(!op)
                cnt++;
        }
        mx = max(mx, cnt);
    }while(next_permutation(num, num+21));
    cout << mx;
}