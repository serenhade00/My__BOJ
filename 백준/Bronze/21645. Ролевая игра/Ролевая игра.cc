#include <iostream>

using namespace std;

int main(void)
{
    int n, m, k;
    cin >> n >> m >> k;
    long long ans;
    
    if(m < k)
	    ans = n*m;
    else
	    ans = n*((k-1)+m/k);
    cout << ans;
}