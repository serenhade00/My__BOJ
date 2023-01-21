#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> queue1, vector<int> queue2) {
    queue<int> q1, q2;
    long long sum1 = 0, sum2 = 0;
    
    for(auto x : queue1)
    {
        sum1 += x;
        q1.push(x);
    }
    for(auto x : queue2)
    {
        sum2 += x;
        q2.push(x);
    }
    
    int len = 4*queue1.size();
    int cnt = 0;
    while(len--)
    {
        if(sum1 > sum2)
        {
            int val = q1.front();
            sum2 += val;
            sum1 -= val;
            q2.push(val);
            q1.pop();
            cnt++;
        }
        else if(sum2 > sum1)
        {
            int val = q2.front();
            sum1 += val;
            sum2 -= val;
            q1.push(val);
            q2.pop();
            cnt++;
        }
        else
            return cnt;
    }
    return -1;
}