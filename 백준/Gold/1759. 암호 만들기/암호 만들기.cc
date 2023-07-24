#include <bits/stdc++.h>

using namespace std;

string s;

bool is_vowel(char c)
{
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return 1;
    return 0;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int l, c;
    char val;
    cin >> l >> c;
    
    vector<int> num(c);
    for(int i=l; i<c; i++)
        num[i] = 1;
    
    for(int i=0; i<c; i++)
    {
        cin >> val;
        s.push_back(val);
    }
    sort(s.begin(), s.end());
    
    do
    {
        string tmp;
        int cons = 0, vow = 0;
        for(int i=0; i<c; i++)
        {
            if(!num[i])
            {
                if(is_vowel(s[i]))
                    vow++;
                else
                    cons++;
                tmp += s[i];
            }
        }
        if(vow >= 1 && cons >= 2)
            cout << tmp << '\n';
    }while(next_permutation(num.begin(), num.end()));
}