#include <iostream>

using namespace std;

int d[31][31];
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    for(int i=1; i<=30; i++)
    {
        d[i][1] = 1;
        d[i][i] = 1;
    }
    for(int i=2; i<=30; i++)
    {
        for(int j=2; j<i; j++)
        {
        	d[i][j] = d[i-1][j-1]+d[i-1][j];
        }
    }
	
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int n, r;
        cin >> n >> r;
		cout << d[r+1][n+1] << '\n';       
    }
}