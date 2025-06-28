#include <bits/stdc++.h>

using namespace std;

int graph[51][51];
int tmp[51];
int val[51];

int solution(vector<string> friends, vector<string> gifts) {
    map<string, int> num;
    int answer = 0;
    
    int len1 = friends.size();
    int len2 = gifts.size();
    
    for(int i=0; i<len1; i++)
    	num[friends[i]] = i+1;
    for(int i=0; i<len2; i++)
    	graph[num[gifts[i].substr(0, gifts[i].find(" "))]][num[gifts[i].substr(gifts[i].find(" ") + 1)]]++;
    for(int i=1; i<=len1; i++)
    {
    	int sen = 0, rec = 0;
    	for(int j=1; j<=len1; j++)
    	{
    		sen += graph[i][j];
    		rec += graph[j][i];
    	}
    	val[i] = sen - rec;
    }
    for(int i=1; i<=len1; i++)
    {
        for(int j=i+1; j<=len1; j++)
        {
            if(graph[i][j] > graph[j][i])
                tmp[i]++;
            else if(graph[i][j] < graph[j][i])
                tmp[j]++;
            else
            {
                if(val[i] > val[j])
                	tmp[i]++;
                else if(val[i] < val[j])
            		tmp[j]++;
            }
        }
    }
    for(int i=1; i<=len1; i++)
        answer = max(answer, tmp[i]);
    return answer;
}