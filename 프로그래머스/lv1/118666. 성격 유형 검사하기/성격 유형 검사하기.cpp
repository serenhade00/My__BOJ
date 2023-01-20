#include <bits/stdc++.h>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    int len = survey.size();
    
    map<char, int> score;
    for(int i=0; i<len; i++)
    {
        if(choices[i] <= 3)
            score[survey[i][0]] += 4 - choices[i];
        else
            score[survey[i][1]] += choices[i] - 4;
            
    }
    
    if(score['R'] >= score['T']) answer += 'R';
    else answer += 'T';
    
    if(score['C'] >= score['F']) answer += 'C';
    else answer += 'F';
    
    if(score['J'] >= score['M']) answer += 'J';
    else answer += 'M';
    
    if(score['A'] >= score['N']) answer += 'A';
    else answer += 'N';
    
    return answer;
}