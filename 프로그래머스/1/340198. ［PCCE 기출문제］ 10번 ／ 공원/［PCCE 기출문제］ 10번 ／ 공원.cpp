#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> mats, vector<vector<string>> park) {
    int x_len = park.size(), y_len = park[0].size();
    sort(mats.begin(), mats.end(), greater<int>());
    for(auto &cur : mats)
    {
        bool op = 0;
        for(int i=0; i<x_len; i++)
        {
            for(int j=0; j<y_len; j++)
            {
            	op = 0;
                for(int ii=i; ii<i+cur; ii++)
                {
                    if(ii >= x_len)
                    {
                        op = 1;
                        break;
                    }
                    for(int jj=j; jj<j+cur; jj++)
                    {
                        if(jj >= y_len || park[ii][jj] != "-1")
                        {
                            op = 1;
                            break;
                        }
                    }
                }
                if(!op)
                    return cur;
            }
        }
    }
    return -1;
}