#include<iostream>
#include<cmath>
using namespace std;
int main() 
{
   int t, a;
   long long int sum = 0;
    cin >> t;
    for (int i = 0; i < t; i++) 
    {
        cin >> a;
        sum += pow(a / 10, a % 10);
    }
    cout << sum << '\n';
}