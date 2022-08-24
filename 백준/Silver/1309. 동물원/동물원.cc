#include <iostream>

using namespace std;

int d[100001];
int main(void)
{
    int n;
    cin >> n;
    d[1] = 3;
    d[2] = 7;
    for(int i=3; i<=n; i++)
        d[i] = (d[i-2]*3 + (d[i-1]-d[i-2])*2) % 9901;
    cout << d[n];
}