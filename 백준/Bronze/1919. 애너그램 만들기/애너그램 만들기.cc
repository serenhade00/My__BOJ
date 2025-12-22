#include<iostream>
#include<string>
using namespace std;
int main() {
    string str1, str2;
    int alp1[26] = {}, alp2[26] = {};
    cin >> str1 >> str2;
    for (int i = 0; i < str1.size(); i++) {
        alp1[str1[i] - 'a']++;
    }
    for (int i = 0; i < str2.size(); i++) {
        alp2[str2[i] - 'a']++;
    }
    int ans = 0;
    for (int i = 0; i < 26; i++) {
        if (alp1[i] != alp2[i]) {
            ans += abs(alp1[i] - alp2[i]);
        }
    }
    cout << ans;
}