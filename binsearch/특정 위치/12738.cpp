#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n;
int a[1000005];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i =0; i < n; i++) cin >> a[i];

    vector<int> lis;
    for (int i =0; i < n; i++) {
        auto x = lower_bound(lis.begin(),lis.end(), a[i]);
        if (x == lis.end()) lis.push_back(a[i]);
        else *x = a[i];
    }

    cout << lis.size();
}