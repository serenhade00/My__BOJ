#include <iostream>

using namespace std;

int main(void)
{
    int a, b;
    char c;
    while(1)
    {
        cin >> a >> c >> b;
        if(a == 0 && b == 0 && c == 'W')
            break;
        if(c == 'W')
        {
            if(a-b < -200)
                cout << "Not allowed\n";
            else
                cout << a-b << '\n';
        }
        else
            cout << a+b << '\n';
    }
}