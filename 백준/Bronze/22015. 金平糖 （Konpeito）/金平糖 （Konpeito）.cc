#include <iostream>

using namespace std;

int main(void)
{
    int a, b, c;
    cin >> a >> b >> c;
    
    int mx = max(max(a, b), c);
    cout << mx-a + mx-b + mx-c;
}