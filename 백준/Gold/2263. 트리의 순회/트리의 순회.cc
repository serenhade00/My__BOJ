#include <bits/stdc++.h>

using namespace std;

int inorder[100001];
int postorder[100001];
int root_pos[100001];

void preorder(int in_st, int in_en, int post_st, int post_en)
{
	if(in_st > in_en || post_st > post_en)
		return;
    int root = postorder[post_en];
    int mid = root_pos[root];
    int l = mid - in_st;
    
    cout << root << ' ';
    preorder(in_st, mid-1, post_st, post_st+l-1);
    preorder(mid+1, in_en, post_st+l, post_en-1);
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++)
    	cin >> inorder[i];
    for(int i=0; i<n; i++)
    	cin >> postorder[i];
    for(int i=0; i<n; i++)
    	root_pos[inorder[i]] = i;
    
    preorder(0, n-1, 0, n-1);
}