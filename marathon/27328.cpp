#include <bits/stdc++.h>
using namespace std;

int main() {
    int A,B;
    cin >> A >> B;

    if (A<B) {
        cout << -1;
    } else if (A > B){
        cout << 1;
    } else if (A == B) {
        cout << 0;
    }
}