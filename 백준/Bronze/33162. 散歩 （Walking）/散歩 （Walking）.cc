#include <iostream>
using namespace std;

int N, A, B;
int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    B = N / 2, A = N - B;
    cout << A * 3 - B * 2;
}