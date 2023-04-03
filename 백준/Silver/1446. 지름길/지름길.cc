#include <bits/stdc++.h>
#define MAX 10001
#define X first
#define Y second

using namespace std;

tuple<int,int,int> fast[15];
int dist[MAX];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, d, a, b, c;
    cin >> n >> d;

    for(int i=0; i<n; i++)
    {
        cin >> a >> b >> c;
        fast[i] = make_tuple(a, b, c);
    }
    
    sort(fast, fast+n);
    
    for(int i=1; i<=d; i++)
    	dist[i] = i;
    	
    for(int i=0; i<n; i++)
    {
        int st, en, dd;
        tie(st, en, dd) = fast[i];
        for(int j=en; j<=MAX; j++)
        {
            if(dist[st] + dd + j - en < dist[j])
                dist[j] = dist[st] + dd + j - en;
        }
    }
    cout << dist[d];
}