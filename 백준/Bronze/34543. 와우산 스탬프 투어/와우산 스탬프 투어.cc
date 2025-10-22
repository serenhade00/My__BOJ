#include <iostream>
#define ll long long
using namespace std;

int main(void)
{	
	ios::sync_with_stdio(0); 
    cin.tie(0);
	ll N,W,score;

	cin>>N>>W;
	score=N*10;

	if (N>=3) score+=20;
	if (N>=5) score+=50;

	if (W>1000) score-=15;

	if (score<0) score=0;

	cout<<score;
}