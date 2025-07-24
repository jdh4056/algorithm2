#include<iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int chang = 100,sang = 100;
    while (n--) {
        int a,b; cin >> a >> b;
        if (a < b) {
            chang -= b;
        } else if (a > b){
            sang -= a;
        }
    }

    cout << chang << '\n' << sang;
}