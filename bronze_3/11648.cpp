#include<iostream>
#include<string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string n; cin >> n;

    int cnt = 0;

    if (n.size() == 1) {
        cout << 0;
    } else {
        while (n.size() > 1) {
            cnt++;
            int temp = 1;
            for (char c : n) {
                int digit = c - '0';
                temp *= digit;
            }
            n = to_string(temp);
        }
        cout << cnt;
    }


}