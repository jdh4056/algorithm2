#include<iostream>
using namespace std;

int a[100005];
int n,m;

bool isPossible(int mid) {
    int count = 1;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] > mid) return false;

        if (sum + a[i] > mid) {
            count++;
            sum = a[i];
        } else {
            sum += a[i];
        }
    }
    return count <= m;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) cin >> a[i];

    int st = 0;
    int en = 0;
    for (int i = 0; i < n; i++) {
        if (st < a[i]) st = a[i];
        en += a[i];
    }

    int res = 0;
    while (st <= en) {
        int mid = (st + en) / 2;
        if (isPossible(mid)) {
            res = mid;
            en = mid - 1;
        } else {
            st = mid + 1;
        }
    }

    cout << res;
}