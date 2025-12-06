#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
    cin.tie(0);
	ll N,i,a,b,cnt=0,mx=0;

	cin>>N;
	for (i=0;i<N;i++)
	{
		cin>>a>>b;
		if (a>b) cnt++;
		else cnt=0;

		mx=max(mx,cnt);
	}
	cout<<mx;
}