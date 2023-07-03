#include <bits/stdc++.h>

using namespace std;

struct Node{
	int left, right;
};

int num;
vector<Node> tree(1000001);

void post(int cur)
{
    if(tree[cur].left)
    	post(tree[cur].left);
    if(tree[cur].right)
    	post(tree[cur].right);
    cout << cur << '\n';
}

void maketree(int cur)
{
	if(num < cur)
	{
		if(tree[cur].left == 0)
		{
			tree[cur].left = num;
			return;
		}
		maketree(tree[cur].left);
	}
	if(num > cur)
	{
		if(tree[cur].right == 0)
		{
			tree[cur].right = num;
			return;
		}
		maketree(tree[cur].right);
	}
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int root;
    cin >> root;
    
    while(cin >> num)
    {
        maketree(root);
    }
    post(root);
}