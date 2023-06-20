#include<iostream>
using namespace std;
double pi = 3.14159265358979;
int main() {
    long double a1, p1, r1, p2;
    cin >> a1 >> p1 >> r1 >> p2;
    long double x = r1 * r1 * pi;
    long double a = a1 / p1;
    long double b = x / p2;
    if (a < b) cout << "Whole pizza" << '\n';
    else cout << "Slice of pizza" << '\n';
}