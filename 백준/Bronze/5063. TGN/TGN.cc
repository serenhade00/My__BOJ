#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if(b-c > a)
            cout << "advertise\n";
        else if(b-c == a)
            cout << "does not matter\n";
        else
            cout << "do not advertise\n";      
    }
}