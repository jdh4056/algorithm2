#include<iostream>
using namespace std;
int n,m;
int a[1000005];

bool isPossible(int mid) {
    long long sum = 0;
    for (int i  =0; i < n; i++) {
        if (a[i] > mid) {
            sum += (a[i] - mid);
        }
    }
    return sum >= m;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) cin >> a[i];

    int st = 0;
    int en = 0;
    for (int i = 0; i < n; i++) en = max(en, a[i]);

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