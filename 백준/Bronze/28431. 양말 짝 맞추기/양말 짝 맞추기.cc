#include <bits/stdc++.h>

using namespace std;

int num[11];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int val;
    
    for(int i=0; i<5; i++)
    {
    	cin >> val;
    	num[val]++;
    }
    for(int i=0; i<=9; i++)
    {
    	if(num[i] % 2)
    		cout << i;
    }
}