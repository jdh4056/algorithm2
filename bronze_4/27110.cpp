#include<iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int a,b,c; cin >> a >> b >> c;

    int sum = 0;
    if (a < n) sum += a;
    else sum += n;
    if (b < n) sum += b;
    else sum += n;
    if (c < n) sum += c;
    else sum += n;

    cout << sum;
}