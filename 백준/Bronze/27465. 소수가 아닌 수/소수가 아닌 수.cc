#include <iostream>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    if(t <= 2)
    {
        cout << 4;
        return 0;
    }
    
    while(1)
    {
        if(t % 2 == 0)
        {
            cout << t;
            return 0;
        }
        t++;
    }
}