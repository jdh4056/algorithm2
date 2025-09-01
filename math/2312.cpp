#include <iostream>
#include<vector>
using namespace std;

vector<int> sieve(int n) {
    vector<int> primes;
    vector<bool> state(n + 1, true);
    if (n >= 0) state[0] = false;
    if (n >= 1) state[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (!state[i]) continue;
        for (int j = i * i; j <= n; j += i) state[j] = false;
    }
    for (int i = 2; i <= n; i++) if (state[i]) primes.push_back(i);
    return primes;
}

int main() {
    int T;
    if (!(cin >> T)) return 0;


    const int MAXN = 100000;
    vector<int> primes = sieve(MAXN);

    while (T--) {
        int n;
        cin >> n;
        int x = n;

        for (int p : primes) {
            if (1LL * p * p > x) break;
            if (x % p == 0) {
                int cnt = 0;
                while (x % p == 0) {
                    x /= p;
                    cnt++;
                }
                cout << p << ' ' << cnt << '\n';
            }
        }
        if (x > 1) {
            cout << x << ' ' << 1 << '\n';
        }
    }
}
