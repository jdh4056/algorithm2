#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int mx = INT_MIN, mn = INT_MAX;
        for (int i = 0; i < n; i++) {
            int a; cin >> a;
            mx = max(a, mx);
            mn = min(a, mn);
        }
        cout << mn << " " << mx << '\n';
    }
}