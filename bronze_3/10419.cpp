#include<iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int a; cin >> a;
        int i = 0;
        while (i * i + i <= a) {
            i++;
        }
        cout << i - 1 << '\n';
    }
}