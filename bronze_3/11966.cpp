#include<iostream>
#include<cmath>
using namespace std;
bool isPowerOfTwo(int n) {
    while (n % 2 == 0) {
        n /= 2;
    }
    return n == 1;
}

int main() {
    int n; cin >> n;

    if (isPowerOfTwo(n)) cout << 1;
    else cout << 0;
}