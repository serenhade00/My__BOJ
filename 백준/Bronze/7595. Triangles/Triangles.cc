#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    while(n != 0)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=i; j>=0; j--)
                cout << "*";
            cout << '\n';
        }
        cin >> n;
    }
}