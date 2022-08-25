#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int w_cnt = 0;
    char c;
    for(int i=0; i<6; i++)
    {
        cin >> c;
        if(c == 'W')
            w_cnt++;
    }
    if(w_cnt == 5 || w_cnt == 6)
        cout << 1;
    else if(w_cnt == 3 || w_cnt == 4)
        cout << 2;
    else if(w_cnt == 1 || w_cnt == 2)
        cout << 3;
    else
        cout << -1;
}