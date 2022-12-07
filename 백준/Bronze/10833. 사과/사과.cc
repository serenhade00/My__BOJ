#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, a, b;
    int sum = 0;
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        cin >> a >> b;
        if(a <= b)
            sum += b % a;
        else
            sum += b;
    }
    cout << sum;
}