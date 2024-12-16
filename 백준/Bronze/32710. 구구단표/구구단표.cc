#include <iostream>  
using namespace std;
int main() {

	int N;
	cin >> N;

	for (int A = 2; A <= 9; ++A) {  
		for (int B = 1; B <= 9; ++B) {  
			int C = A * B;

			if (A == N || B == N || C == N) { 
				cout << 1;
				return 0;
			}
		}
	}
	cout << 0;
}