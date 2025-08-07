#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;
    int n2int = stoi(n);

    string s;
    for (int i = 1; i <= n2int; i++) {
        s += to_string(i);
    }

    int pos = s.find(n);

    cout << pos + 1;
}