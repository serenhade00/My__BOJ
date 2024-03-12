#include <iostream>

using namespace std;

int main(void)
{
    long long t, ans = 0;
    cin >> t;
    while(t > 1)
    {
        if(t % 2)
            t = t*3 + 1;
        else
            t /= 2;
        ans++;
    }
    cout << ans;
}