#include<iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n,c;
        cin >> n >> c;

        int days = n / c;
        if (n % c == 0) cout << days << '\n';
        else cout << days+1 << '\n';
    }
}