#include <iostream>

using namespace std;

int main(void)
{
    int n, val;
    int cnt = 0;
    cin >> n;
    for(int i=0; i<5; i++)
    {
        cin >> val;
        if(n == val)
            cnt++;
    }
    cout << cnt;
}