#include <iostream>

using namespace std;

int main(void)
{
    int n, val, odd = 0, even = 0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> val;
        if(val % 2)
            odd++;
        else
            even++;
    }
    if(even > odd)
        cout << "Happy";
    else
        cout << "Sad";
}