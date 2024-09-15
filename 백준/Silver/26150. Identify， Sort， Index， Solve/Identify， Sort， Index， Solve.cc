#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;

pair<pair<int,int>, string> p[101];
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    string s;
    cin >> t;
    for(int i=0; i<t; i++)
        cin >> p[i].Y >> p[i].X.X >> p[i].X.Y;
    sort(p, p+t);
    for(int i=0; i<t; i++)
    {
    	char tmp = p[i].Y[p[i].X.Y-1];
    	if(tmp >= 97 && tmp <= 122)
    		s += (char)(tmp - 32);
    	else
    		s += tmp;
    }
    cout << s;
}