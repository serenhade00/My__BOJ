#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a, b, c, total;
    cin >> a >> b >> c;
    if(c <= abs(a-b))
    	cout << (min(a, b) + c) * 2;
    else
    {
    	c -= abs(a-b);
    	cout << (max(a, b) + c / 2) * 2;
    }
}