#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        int sum = 0, val;
        int mn = 101;
        for(int j=0; j<7; j++)
        {
            cin >> val;
            if(val % 2 == 0)
            {
                sum += val;
                mn = min(mn, val);
            }
        }
        cout << sum << ' ' << mn << '\n';
    }
}