#include <iostream>
using namespace std;
int month = 24288;
int N;
int main()
{
    cin >> N;

    month += N * 7;
    cout << (month / 12) << " " << (month % 12 + 1);
}