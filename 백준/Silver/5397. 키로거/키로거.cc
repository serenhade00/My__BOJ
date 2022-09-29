#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        string s;
        cin >> s;
        int len = s.size();
        stack<char> s1, s2;          // 앞 문자열, 뒷 문자열
        
        for(int j=0; j<len; j++)
        {
            if(s[j] == '<')          // 커서가 왼쪽으로 가면 커서 오른쪽 문자는 뒷 문자열로
            {
                if(s1.empty())
                    continue;
                s2.push(s1.top());          
                s1.pop();
            }
            else if(s[j] == '>')     // 커서가 오른쪽으로 가면 커서 왼쪽 문자는 앞 문자열로
            {
                if(s2.empty())
                    continue;
                s1.push(s2.top());
                s2.pop();
            }
            else if(s[j] == '-')    // 커서 왼쪽(앞) 문자 지우기기
            {
                if(s1.empty())
                    continue;
                s1.pop();
            }
            else                    // 커서 기준 push
                s1.push(s[j]);
        }
        vector<char> v;
        while(!s2.empty())          // 뒷 배열은 커서를 왼쪽으로 옮길때 push 됨. 즉, top의 원소가 앞임.
        {
            s1.push(s2.top());
            s2.pop();
        }
        while(!s1.empty())
        {
            v.push_back(s1.top());
            s1.pop();
        }
        reverse(v.begin(), v.end());  // s2->s1으로 옮길때, 그리고 s2가 s1이 top에 오므로 순서가 역순임.  
        
        for(auto e : v)
            cout << e;
        cout << '\n';
    }
}