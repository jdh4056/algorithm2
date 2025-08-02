#include<iostream>
#include<vector>
using namespace std;

int main() {
    int a,b,c; cin >> a>>b>>c;
    vector<int> even;
    vector<int> odd;

    if (a % 2 == 0) even.push_back(a);
    else odd.push_back(a);

    if (b % 2 == 0) even.push_back(b);
    else odd.push_back(b);

    if (c % 2 == 0) even.push_back(c);
    else odd.push_back(c);

    int ans = 1;
    if (odd.empty()) {
        for (int i = 0; i < even.size(); i++) {
            ans *= even[i];
        }
    } else {
        for (int i = 0; i < odd.size(); i++) {
            ans *= odd[i];
        }
    }

    cout << ans;
}