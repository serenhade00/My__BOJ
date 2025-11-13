#include <iostream>
#include <string>
#define ll long long
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0); 
    cin.tie(0);
	ll N,i,sum=0,x;
	string s1,s2;

	cin>>N;
	for (i=0;i<N;i++)
	{
		cin>>s1>>s2>>x;
		if (s2=="IN") sum+=x;
		else sum-=x;
	}
	if (sum==0) cout<<"NO STRAGGLERS";
	else cout<<sum;
}