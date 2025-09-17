#include <iostream>
#define ll long long
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0); 
    cin.tie(0);
	ll H1,M1,S1,H2,M2,S2;
	bool IsChange=false;
	char c;

	cin>>H1>>c>>M1>>c>>S1;
	cin>>H2>>c>>M2>>c>>S2;

	ll Ans1,Ans2,Ans3;

	Ans3=(H2-H1)*60+(M2-M1);
	Ans2=H2-H1;
	
	if (H1<12 && 12<=H2) Ans1=1;
	else Ans1=0;

	cout<<Ans1<<' '<<Ans2<<' '<<Ans3;
}