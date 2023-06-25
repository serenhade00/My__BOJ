#include <iostream>

using namespace std;

int d[100001];
int main(void)
{
    int n;
    cin >> n;
    
    for(int i=1; i<=316; i++)
    {
        int mul = i*i;
        d[mul] = 1;
    }
    for(int i=1; i<=n; i++)
    {
        int add;
        for(int j=1; j<=316; j++)
        {
            add = j*j;
            if(i+add > 100000)
            	break;
            if(!d[i+add])
            	d[i+add] = d[i]+1;
        	else
        		d[i+add] = min(d[i+add], d[i]+1);
        }
    }
    cout << d[n];
}