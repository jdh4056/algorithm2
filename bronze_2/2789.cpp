#include<iostream>
#include<string>

using namespace std;

int main() {
    string s; cin>>s;
    string a = "CAMBRIDGE";
    for (int i = 0; i < s.size();) {
        if (a.find(s[i]) != string::npos) {
            s.erase(i,1);
        } else {
            i++;
        }
    }

    cout << s;
}