#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    int x_min = 51, y_min = 51, x_max = 0, y_max = 0;
    vector<int> answer;
    int x_len = wallpaper.size(), y_len = wallpaper[0].size();
    for(int i=0; i<x_len; i++)
    {
        for(int j=0; j<y_len; j++)
        {
            if(wallpaper[i][j] == '#')
            {
                x_min = min(x_min, i);
                y_min = min(y_min, j);
                x_max = max(x_max, i);
                y_max = max(y_max, j);
            }
                
        }
    }
    answer.push_back(x_min);
    answer.push_back(y_min);
    answer.push_back(x_max+1);
    answer.push_back(y_max+1);
    return answer;
}