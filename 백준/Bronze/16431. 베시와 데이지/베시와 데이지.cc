#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    if(max(abs(a-e), abs(b-f)) < abs(c-e) + abs(d-f))
       cout << "bessie";
    else if(max(abs(a-e), abs(b-f)) > abs(c-e) + abs(d-f))
       cout << "daisy";
    else
       cout << "tie";
}