#include<iostream>
using namespace std;

int main() {
    int n; cin >> n;

    while (n--) {
        int a; cin >> a;
        int sum = 0;
        for (int i = 1; i <= a; i++) {
            if (i % 2 != 0) {
                sum += i;
            }
        }
        cout << sum << '\n';
    }
}