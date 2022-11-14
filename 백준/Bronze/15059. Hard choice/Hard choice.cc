#include <iostream>

using namespace std;

int main(void)
{
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    
    int cnt = 0;
    if(d > a)
        cnt += d-a;
    if(e > b)
        cnt += e-b;
    if(f > c)
        cnt += f-c;
    cout << cnt;
}