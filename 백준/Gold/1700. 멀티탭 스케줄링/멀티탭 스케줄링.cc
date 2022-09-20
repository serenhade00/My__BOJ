#include <bits/stdc++.h>

using namespace std;

int apl[101];
int outlet[101];
int remain[101];
int dist[101];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, k;
    int cnt = 0;
    cin >> n >> k;
    int cur_size = 0;
    for(int i=0; i<k; i++)
    {
        cin >> apl[i];
        remain[apl[i]]++;
    }
    int num = 0;
    
    for(int i=0; i<k; i++)
    {
    	
        bool op = 0;
        if(cur_size < n)
        {
        	bool found = 0;
        	for(int w = 0; w < n; w++)
        	{
        		if(outlet[w] == apl[i])
        			found = 1;
        	}
        	if(!found)
        		outlet[cur_size++] = apl[i];
            remain[apl[i]]--;
            continue;
        }
        
        for(int j=0; j<n; j++)
        {
            if(apl[i] == outlet[j])
            {
                op = 1;
                remain[apl[i]]--;
                break;
            }
        }
        if(op)
            continue;
        else
        {
        	bool op1 = 0;
            for(int l=0; l<n; l++)
            {
                if(!remain[outlet[l]])
            	{
            		outlet[l] = apl[i];
            		remain[apl[i]]--;
            		op1 = 1;
            		cnt++;
            		break;
            	}
            }
            if(op1)
            	continue;
            int mx_dist = 0, mx_idx;
            for(int l=0; l<n; l++)
            {
				int tmp_dist = 1;
            	for(int p = i+1; p < k; p++)
            	{
            		if(apl[p] == outlet[l])
            			break;
            		tmp_dist++;
            	}
            	if(tmp_dist > mx_dist)
            	{
            		mx_dist = tmp_dist, mx_idx = l;
            	}
            }
            outlet[mx_idx] = apl[i];
            remain[apl[i]]--;
            cnt++;
        }
    }
    cout << cnt;
}