#include <iostream>

using namespace std;

int main(void)
{
    int n, m, k;
    cin >> n >> m >> k;
   (n % (k-m))  == 0 ? cout << n / (k-m) : cout << n / (k-m) + 1;
}