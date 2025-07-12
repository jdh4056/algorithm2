#include<iostream>
#include<algorithm>
using namespace std;
int n,c;
int a[200005];

bool isPossible(int mid) {
    int cnt = 1;
    int first = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] - first >= mid) {
            cnt++;
            first = a[i];
        }
    }
    return cnt >= c;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> c;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);

    int st = 0;
    int en = a[n-1];
    int res = 0;

    while (st <= en) {
        int mid = (st + en) / 2;
        if (isPossible(mid)) {
            res = mid;
            st = mid + 1;
        } else {
            en = mid - 1;
        }
    }

    cout << res;
}
