#include <bits/stdc++.h>

using namespace std;

int a[100001];
int sz = 0;

void push(int x)
{
	a[++sz] = x;
	int index = sz;
	while(index!=1)
	{
		int parent = index/2;
		if(a[parent] <= a[index]) 
			break;
		swap(a[parent], a[index]);
		index /= 2;
	}
}
int top()
{
	if(sz==0)
		return 0;
	return a[1];
}
void pop()
{
	a[1] = a[sz--];
	int index = 1;
	while(2*index <= sz)
	{
		int left = 2*index;
		int right = 2*index+1;
		int min_child = left;
		if(right <= sz && a[right] < a[left])
			min_child = right;
		if(a[index] <= a[min_child])
			break;
		swap(a[index], a[min_child]);
		index = min_child;
	}
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n;
	int val;
	cin >> n;
	for(int i=0; i<n; i++)
	{
		cin >> val;
		if(val == 0)
		{
			cout << top() << '\n';
			if(sz!=0)
				pop();
		}
		else
			push(val);
	}
}