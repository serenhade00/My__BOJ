#include <iostream>
#define ll long long
using namespace std;

int main(void)
{	
	ios::sync_with_stdio(0); 
    cin.tie(0);
	ll N,i,a,b,c,d,cnt=0;

	cin>>N;
	for (i=0;i<N;i++)
	{
		cin>>a>>b>>c>>d;
		if (a>=1000 || b>=1600 || c>=1500 || (1<=d && d<=30)) cnt++;
	}
	cout<<cnt;
}