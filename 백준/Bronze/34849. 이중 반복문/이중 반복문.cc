#include <iostream>

using namespace std;

int main(void)
{
    long long n;
    cin >> n;
    if(n*n <= 1e8)
        cout << "Accepted";
    else
        cout << "Time limit exceeded"; 
}