#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    int h = park.size(), w = park[0].size(), cur_x, cur_y;
    
    for(int i=0; i<h; i++)
    {
        for(int j=0; j<w; j++)
        {
            if(park[i][j] == 'S')
            {
                cur_x = i, cur_y = j;
                break;
            }
        }
    }
    for(auto &e : routes)
    {
        bool op = 1;
        string dir, nn;
        stringstream parse(e);
        parse >> dir >> nn;
        cout << dir << ' ';
        int num = stoi(nn);

        if(dir == "E")
        {
            if(cur_y + num >= w)
            {
            	op = 0;
            	continue;
            }
            for(int j=cur_y+1; j<=cur_y+num; j++)
            {
                if(park[cur_x][j] == 'X')
                {
                    op = 0;
                    break;
                }
            }
            if(op)
                cur_y += num;
        }
        else if(dir == "W")
        {
            if(cur_y - num < 0)
            {
            	op = 0;
            	continue;
            }
            for(int j=cur_y-1; j>=cur_y-num; j--)
            {
                if(park[cur_x][j] == 'X')
                {
                    op = 0;
                    break;
                }
            }
            if(op)
            	cur_y -= num;
        }
        if(dir == "S")
        {
            if(cur_x + num >= h)
            {
            	op = 0;
            	continue;
            }
            for(int i=cur_x+1; i<=cur_x+num; i++)
            {
                if(park[i][cur_y] == 'X')
                {
                    op = 0;
                    break;
                }
            }
            if(op)
                cur_x += num;
        }
        if(dir == "N")
        {
            if(cur_x - num < 0)
            {
            	op = 0;
            	continue;
            }
            for(int i=cur_x-1; i>=cur_x-num; i--)
            {
                if(park[i][cur_y] == 'X')
                {
                    op = 0;
                    break;
                }
            }
            if(op)
                cur_x -= num;
        }
    }
    vector<int> answer;
    answer.push_back(cur_x), answer.push_back(cur_y);
    return answer;
}

int main(void)
{
	vector<string> park = {"OSO","OOO","OXO","OOO"};
	vector<string> route = {"E 2","S 3","W 1"};
	vector<int> ans = solution(park, route);
	cout << ans[0] << ' ' << ans[1];
}