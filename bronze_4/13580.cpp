#include<bits/stdc++.h>
using namespace std;

int main() {
    char ch;
    int win = 0;
    for (int i = 0 ; i <6; i++) {
        cin >> ch;
        if (ch == 'W') win++;
    }
    if (win >= 5) cout << 1;
    else if (win >=3) cout << 2;
    else if (win >= 1) cout << 3;
    else cout << -1;
}