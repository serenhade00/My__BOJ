#include <bits/stdc++.h>

using namespace std;

vector<int> v;

int main()
{
    int T;
    string s;
    int sum = 0;
    cin >> T;
    while (T--){
        int sum = 0;
        cin >> s;
        for (int i=0; i<26; i++){
            v.push_back(0);
        }
        for (int i=0; i<s.size(); i++){
            v[s[i] - 'A'] = 1;
        }
        for (int i=0; i<v.size(); i++){
            if (v[i] == 0) {
                int ans = i + 'A';
                sum += ans;
            }
        }
        cout << sum << '\n';
        v.clear();
    }
}