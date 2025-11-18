#include <iostream>

using namespace std;

int main(void)
{
    int n, m;
    cin >> n >> m;
    if(m * 100 >= n * 81)
        cout << "yaho";
    else
        cout << "no";
}