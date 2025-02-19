#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> schedules, vector<vector<int>> timelogs, int startday) {
    int answer = 0;
    int len = schedules.size();
    for(int i=0; i<len; i++)
    {
        bool op = 0;
        int day = startday;
        for(int j=0; j<7; j++)
        {
            if(day % 7 == 6 || day % 7 == 0)
            {
                day++;
                continue;
            }
            if(schedules[i] % 100 >= 50 && timelogs[i][j] - schedules[i] <= 50)
            {
                day++;
                continue;
            }
            if(timelogs[i][j] > schedules[i] + 10)
            {
                op = 1;
                break;
            }
            day++;
        }
        if(!op)
            answer++;
    }
    return answer;
}