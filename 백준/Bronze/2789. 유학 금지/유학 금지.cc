#include <iostream>
#include <string>
using namespace std;
int main() {
    string word;
    cin >> word;
    string target = "CAMBRIDGE";
    string res = "";

    for (int i = 0; i < word.length(); i++) {
        if (target.find(word[i]) == string::npos)
            res += word[i];
    }
    cout << res;
}