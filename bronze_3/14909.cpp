#include<iostream>
#include<vector>
using namespace std;

int main() {
    long long x;
    long long cnt = 0;
    while (cin >> x) {
        if (x > 0) cnt++;
    }
    cout << cnt;

}