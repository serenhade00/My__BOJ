#include <iostream>

using namespace std;

int main(void)
{
    int a, b;
    cin >> a >> b;
    for(int i=0; i<a; i++)
    {
        for(int j=1; j<=b; j++)
        {
            cout << i*b+j;
            if(j != b)
                cout << ' ';
        }
        cout << '\n';
    }
}