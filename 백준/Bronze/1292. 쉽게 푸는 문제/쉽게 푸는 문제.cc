#include <bits/stdc++.h>

using namespace std;

int pro[1001];
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int a, b;
	cin >> a >> b;
	int count = 0;
	int num = 1;
	int index = 0;
	int sum = 0;
	while(index <= 1000)
	{
		count++;
		index++;
		pro[index] = num;
		if(count == num)
		{
			count = 0;
			num++;
		}
	}
	
	for(int i=a; i<=b; i++)
	{
		sum += pro[i];
	}
	
	cout << sum;
}
		   