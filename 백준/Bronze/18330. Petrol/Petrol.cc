#include<iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	int c = a - b; 
	if (c - 60 >= 0)
		cout << (60 - b) * 1500 + (a - 60) * 3000;
	else
		cout << 1500 * a;
}