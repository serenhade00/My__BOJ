#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a, b, c;
    cin >> a >> b >> c;
    
    if(a == b || b == c || a == c || a+b == c || b+c == a || a+c == b)
        cout << 'S';
    else
        cout << 'N';
}