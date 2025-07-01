#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    int idx = 0, hp = health, len = attacks.size(), t = 1, cnt = 0;
    int at_time = attacks[idx][0], at_damage = attacks[idx][1];
    
    while(1)
    {
        if(t == at_time)
        {
            cnt = 0;
            hp -= at_damage;
            if(hp <= 0)
                return -1;
            idx++;
            if(idx >= len)
            	return hp;
            at_time = attacks[idx][0], at_damage = attacks[idx][1];
        }
        else
        {
            cnt++;
            if(hp == health)
            {
            	t++;
            	continue;
            }
            hp = min(hp + bandage[1], health);
            if(cnt == bandage[0])
            {
                cnt = 0;
                hp = min(hp + bandage[2], health);
            }
        }
        t++;
    }
}