#include <iostream>

using namespace std;

int main(void)
{
    int n, m, k;
    cin >> n >> m >> k;
    
    cout << min(m, k) + min(n-m, n-k);
}