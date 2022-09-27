#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string l, r;
    cin >> l >> r;
    
    if(r.size() > l.size())        // r이 l보다 길이가 길면 0
    {
        cout << 0;
        return 0;
    }
    int len = l.size();
    int cnt = 0;
    for(int i=0; i<len; i++)           
    {
        if(l[i] != '8' || r[i] != '8')
        {
        	if(l[i] != r[i])
        		break;
        	continue;
        }
        else
            cnt++;                               // 같은 자리수가
    } 
    cout << cnt;
}