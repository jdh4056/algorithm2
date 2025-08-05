#include<iostream>
#include<string>
#include<vector>
#include<cctype>

using namespace std;

int main() {
    string s; cin >> s;

    vector<char> v;
    for (int i = 0; i < s.size();i++) {
        if (isupper(s[i])) v.push_back(s[i]);
    }

    for (char c : v) cout << c;
}