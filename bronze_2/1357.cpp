#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    string x, y;
    cin >> x >> y;

    reverse(x.begin(), x.end());
    reverse(y.begin(), y.end());

    int mid = stoi(x) + stoi(y);
    string mid2s = to_string(mid);

    reverse(mid2s.begin(), mid2s.end());

    int res = stoi(mid2s);

    cout << res;
}