#include <bits/stdc++.h>

using namespace std;

int lego[1000001];

void find_lego(int n, int x)
{
    int st = 0, en = n-1;
    int a = -1, b = -1;
    while(st < en)
    {
        if(lego[st] + lego[en] < x)
            st++;
        else if(lego[st] + lego[en] > x)
            en--;
        else
        {
            a = lego[st], b = lego[en];
            break;
        }
    }
    if(a != -1 && b != -1)
        cout << "yes " << a << ' ' << b << '\n';
    else
        cout << "danger\n"; 
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int x, n;

    while(cin >> x >> n)
    {
        for(int i=0; i<n; i++)
            cin >> lego[i];

        sort(lego, lego+n);
        find_lego(n, x*1e7);
    }

}