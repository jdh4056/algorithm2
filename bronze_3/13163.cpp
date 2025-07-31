#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    int n; cin >> n;
    cin.ignore();
    while (n--) {
        string s;
        getline(cin, s);
        int idx = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                idx = i;
                break;
            }
        }

        s.insert(idx, "god");
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        s.erase(0,idx);
        cout << s << '\n';
    }
}