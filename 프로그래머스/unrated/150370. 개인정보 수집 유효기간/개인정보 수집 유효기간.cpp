#include <bits/stdc++.h>

using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    
    int t_year = stoi(today.substr(0, 4));
    int t_month = stoi(today.substr(5, 2));
    int t_day = stoi(today.substr(8, 2));
    
    int len1 = privacies.size(), len2 = terms.size();
    for(int i=0; i<len1; i++)
    {
        char cur_let = privacies[i][11];
        for(int j=0; j<len2; j++)
        {
            if(terms[j][0] == cur_let)
            {
                int p_year = stoi(privacies[i].substr(0, 4));
                int p_month = stoi(privacies[i].substr(5, 2));
                int p_day = stoi(privacies[i].substr(8, 2));
                
                int tmp_year = p_year + (p_month + stoi(terms[j].substr(2, 3))-1) / 12;
                int tmp_month = (p_month + stoi(terms[j].substr(2, 3))) % 12;
                if(tmp_month == 0)
                	tmp_month = 12;
                if(p_day == 1)
                {
                    tmp_year = p_year + (p_month + stoi(terms[j].substr(2, 3))-2) / 12;
                    tmp_month = (p_month + stoi(terms[j].substr(2, 3))-1) % 12;
                    if(tmp_month == 0)
                		tmp_month = 12;
                    p_day = 28;
                }
                
                cout << tmp_year << ' ' << tmp_month << ' ' << p_day;
                if(t_year > tmp_year)
                	answer.push_back(i+1);
                else if(t_year == tmp_year)
                {
                    if(t_month > tmp_month)
                    	answer.push_back(i+1);
                    else if(t_month == tmp_month)
                    {
                        if(t_day >= p_day && p_day != 28)
                        	answer.push_back(i+1);
                    }
                }
            }
        }
    }
    sort(answer.begin(), answer.end());

    return answer;
}