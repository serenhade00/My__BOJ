#include <bits/stdc++.h>

using namespace std;

int dp[5001];

int what_num(int N)
{
	if(dp[N] != 2)
		return dp[N];
		
	int check, sum = 0;
	for(int i=1; i<=N/2; i++){
		if(N%i==0){
			sum=sum+i;
		}
	}
	for(int i=1; i<=N/2; i++){
		if(sum==N) check=0;
		else if(N<sum) check=1;
		else check=-1;
	}
	
	dp[N] = check;
	return dp[N];
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	fill(dp, dp+5001, 2);
	
	int t, num;
	cin >> t;
	for(int i=0; i<t; i++)
	{
		bool op = 1;
		cin >> num;
		if(what_num(num) != 1)
			op = 0;
		for(int j=1; j<=num/2; j++)
		{
			if(num % j == 0)
			{
				if(what_num(j) != 1)
					continue;
				op = 0;
			}
		}
		if(op)
			cout << "Good Bye\n";
		else
			cout << "BOJ 2022\n";
	}
}


