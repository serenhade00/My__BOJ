#include <bits/stdc++.h>

using namespace std;

int solution(int n, int w, int num) {
    
    int cur = num, row = (num-1) / w + 1, answer = 1;
    
    while(1)
    {
        cur += 2 * (w * row - cur) + 1;
        if(cur > n)
        	break;
        row++;
        answer++;
    }
    return answer;
}