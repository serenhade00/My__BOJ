#include <bits/stdc++.h>

using namespace std;

int z_num(int n, int r, int c)
{
	int half = pow(2, n-1);
	if(n==0)
		return 0;
	else
	{
		if(r < half && c < half)
			return z_num(n-1, r, c); 
		else if(r < half && c >= half)
			return half*half + z_num(n-1, r, c-half); 
		else if(r >= half && c < half)
			return 2*half*half + z_num(n-1, r-half, c); 
		else
			return 3*half*half + z_num(n-1, r-half, c-half); 
	}
	
}

int main(void)
{
	int n, r, c;
	
	cin >> n >> r >> c;
	cout << z_num(n, r, c);
}