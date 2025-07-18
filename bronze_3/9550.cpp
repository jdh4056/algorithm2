#include<iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        int cnt = 0;
        for (int i = 0; i < n; i++) {
            cnt += a[i] / k;
        }

        cout << cnt << '\n';
    }
}