#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        
        if(a*b > c*d)
            cout << "TelecomParisTech\n";
        else if(a*b < c*d)
            cout << "Eurecom\n";
        else
            cout << "Tie\n";
    }
}