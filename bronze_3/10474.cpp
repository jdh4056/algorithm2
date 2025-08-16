#include<iostream>
using namespace std;

int main() {
    while (true) {
        int a, b;
        cin >> a >> b;
        if (a == 0 && b == 0) break;

        int head = a / b;
        int rest = a % b;
        cout << head <<" " << rest << " / " << b << '\n';
    }
}