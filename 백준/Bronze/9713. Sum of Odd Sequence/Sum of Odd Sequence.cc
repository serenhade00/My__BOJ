#include <iostream>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int n, sum = 0;
        cin >> n;
        for(int j=1; j<=n; j++)
        {
            if(j % 2)
                sum += j;
        }
        cout << sum << '\n';
    }
}