#include <bits/stdc++.h>

using namespace std;

int room[10];

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	while(n>0)
	{
		room[n%10]++;
		n /= 10;
	}
	room[6] = (room[6]+room[9]+1)/2;
	room[9] = 0;
	
	cout << *max_element(room, room+10);
}