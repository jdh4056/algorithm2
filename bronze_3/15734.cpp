#include<iostream>
using namespace std;

int main() {
    int l,r,a;
    cin >> l >> r >> a;

    int sum = 0;
    if (l == r) {
        sum += l;
        sum += r;
        if (a % 2==0) sum += a;
        else sum += (a-1);
    } else if (l > r) {
        if (a + r >= l) {
            sum += l*2;
            a -= l-r;
            if (a % 2==0) sum += a;
            else sum += (a-1);
        } else {
            sum += (a + r)*2;
        }

    } else if (l < r) {
        if (a + l >= r) {
            sum += r*2;
            a -= r-l;
            if (a % 2==0) sum += a;
            else sum += (a-1);
        } else {
            sum += (a + l)*2;
        }
    }

    cout << sum;
}
