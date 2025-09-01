#include <iostream>

using namespace std;

int main(void)
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    n*3 > m ? cout << (n*3-m)*a+b : cout << 0;
}