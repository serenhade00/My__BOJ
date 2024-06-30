#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//백준 25840번 코드
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);   cout.tie(NULL);
   
    int n;
    cin >> n;
    cin.ignore();

    vector<string> v;
    for (int i = 0; i < n; i++) {
        string st;
        cin >> st;
        
        if (find(v.begin(), v.end(), st) == v.end()) {
            v.push_back(st);
        }
    }
    cout << v.size() << '\n';
}