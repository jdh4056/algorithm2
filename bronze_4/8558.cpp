#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;

    int sum = 1;
    for (int i = 1; i <= n; i++) {
        sum *= i;
    }

    cout << sum %10;
}