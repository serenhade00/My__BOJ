#include <bits/stdc++.h>

using namespace std;

int num[101];

void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(void)
{
	int n, m;
    cin >> n >> m;
    
    for(int i=0; i<n; i++)
        num[i] = i+1;
    for(int i=0; i<m; i++)
    {
        int st, en;
        cin >> st >> en;
        swap(&num[st-1], &num[en-1]);
    }
    for(int i=0; i<n; i++)
        cout << num[i] << ' ';
}