#include<iostream>
#include<string>
using namespace std;

int main() {
    int k; cin >> k;
    string s; cin >> s;


    for (int i = 0; i < s.size(); i += k) {
        cout << s[i];
    }
}