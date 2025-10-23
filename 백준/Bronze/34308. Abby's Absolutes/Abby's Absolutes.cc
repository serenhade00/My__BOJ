#include <iostream>
#define ll long long
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0); 
    cin.tie(0);
	ll N,K,i,x;

	cin>>N>>K;
	for (i=0;i<K;i++)
	{
		cin>>x;
		if ((x-1)<=(N-x)) cout<<"1 ";
		else cout<<N<<' ';
	}
}