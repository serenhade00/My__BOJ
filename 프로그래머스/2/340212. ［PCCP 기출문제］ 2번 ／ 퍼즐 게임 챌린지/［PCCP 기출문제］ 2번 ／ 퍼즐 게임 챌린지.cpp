#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> diffs, vector<int> times, long long limit) {
    int st = 0, en = 1e9, len = diffs.size();
    
    while(st+1 < en)
    {
        int mid = (st+en)/2;
        long long sum = 0;
        if(mid >= diffs[0])
            sum += times[0];
        else
            sum += (diffs[0]-mid+1) * times[0];
        for(int i=1; i<len; i++)
        {
            if(mid >= diffs[i])
                sum += times[i];
            else
                sum += (diffs[i]-mid) * (times[i-1] + times[i]) + times[i];
        }
        if(sum > limit)
            st = mid;
        else
            en = mid;
    }
    return en;
}