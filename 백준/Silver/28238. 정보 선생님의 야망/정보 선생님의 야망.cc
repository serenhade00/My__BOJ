#include <bits/stdc++.h>

using namespace std;

int num[1000001][6];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a[5] = {0, 0, 1, 1, 1};
    int n, mx = 0, ff, ss;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=5; j++)
            cin >> num[i][j];
    }
    
    do{
        int tmp = 0, f = 0, s = 0;
        for(int i=0; i<5; i++)
        {
            if(!a[i] && !f)
                f = i+1;
            else if(!a[i] && f && !s)
                s = i+1;
        }
        for(int i=1; i<=n; i++)
        {
             if(num[i][f] && num[i][s])
                 tmp++;
        }
        if(tmp > mx)
        {
            mx = tmp, ff = f, ss = s;
        }
    }while(next_permutation(a, a+5));
    cout << mx << '\n';
    if(mx == 0)
    	cout << 1 << ' ' << 1 << ' ' << 0 << ' ' << 0 << ' ' << 0;
    else
    {
    	for(int i=1; i<=5; i++)
	    {
	        if(i == ff || i == ss)
	            cout << 1 << ' ';
	        else
	            cout << 0 << ' ';
	    }
    }
}