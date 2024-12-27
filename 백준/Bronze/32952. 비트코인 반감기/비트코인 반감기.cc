#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    long long a, b, c;
    cin >> a >> b >> c;
    if(c / b > 33)
    	a = 0;
    else
    	a >>= c / b;
    cout << a;
}