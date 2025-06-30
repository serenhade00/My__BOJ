#include <bits/stdc++.h>

using namespace std;

bool chk[1001][1001];

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    map<string, int> idx;
    int len1 = id_list.size(), len2 = report.size();
    vector<int> answer(len1, 0);
    vector<vector<int>> v(len1+1);
    for(int i=1; i<=len1; i++)
        idx[id_list[i-1]] = i;
    
    for(int i=0; i<len2; i++)
    {
        string from, to;
        stringstream parse(report[i]);
        parse >> from >> to;
        
		int st = idx[to], en = idx[from];
        if(chk[st][en])
            continue;
        v[st].push_back(en);
        chk[st][en] = 1;
    }
    for(int i=1; i<=len1; i++)
    {
        if(v[i].size() >= k)
        {
            for(auto e : v[i])
                answer[e-1]++;
        }
    }
    return answer;
}