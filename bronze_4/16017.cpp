#include<iostream>
using namespace std;

int main() {
    char a[4];
    for (int i = 0; i < 4; i++) {
        cin >> a[i];
    }

    bool b = (a[0] == '8' || a[0] == '9') &&
        (a[3] == '8' || a[3] == '9') &&
        (a[1] == a[2]);

    if (!b) cout << "answer";
    else cout << "ignore";

}