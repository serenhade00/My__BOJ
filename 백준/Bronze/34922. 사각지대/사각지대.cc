#include <bits/stdc++.h>
#define PI 3.14159265359

using namespace std;

int main() 
{
	double w, h, r;
	cin >> w >> h >> r;
	cout.precision(2);
	cout << fixed;
	cout << w*h - PI * r * r / 4.0;
}