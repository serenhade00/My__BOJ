#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
    int t, a_sum = 0, b_sum = 0;
    cin >> t;
    
    for(int i=0; i<t; i++)
    {
    	int a, b;
    	cin >> a >> b;
    	if(a > b)
    		a_sum++;
    	else if(a == b)
    		continue;
    	else
    		b_sum++;
    }
    cout << a_sum << ' ' << b_sum;
}