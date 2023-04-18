#include <iostream>

using namespace std;

int coin[11];

int main(void)
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        bool op = 1;
        int n, tmp = 0;
        cin >> n;
        for(int j=0; j<n; j++)
        {
            cin >> coin[j];
            if(coin[j] < tmp*2)
                op = 0;
            tmp = coin[j];
        }
        cout << "Denominations: ";
        for(int j=0; j<n; j++)
            cout << coin[j] << ' ';
        cout << '\n';
        if(op)
            cout << "Good coin denominations!\n\n";
        else
            cout << "Bad coin denominations!\n\n";
    }
}