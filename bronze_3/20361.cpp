#include<iostream>
using namespace std;

int main() {
    int n,x,k;
    cin >> n >> x >> k;
    int ans = x;
    while (k--) {
        int a, b; cin >> a >> b;
        if (a == ans) {
            ans = b;
        } else if (b == ans) {
            ans = a;
        }
    }
    cout << ans;
}