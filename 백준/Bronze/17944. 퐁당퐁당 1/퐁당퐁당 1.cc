#include<algorithm>
#include<cmath>
#include<iostream>

using namespace std;

int N, M;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> M;
	M = M - 1;
	
	int divide = N * 2 * 2 - 2;
	int turns = M % ((N * 2 * 2) -2);
	if (N * 2 <= turns) 
		cout << N * 2 - (turns - N * 2)-1<<"\n";
	else 
		cout << turns+1 << "\n";
}