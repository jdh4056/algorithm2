#include<iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int blank = 0;
    int star = 0;
    for (int i = 1; i <=2*n-1;i++) {
        if (i <= n) {
            blank = n - i;
            star = i;
        } else {
            blank = i - n;
            star = 2*n - i;
        }
        for (int j = 0; j < blank; j++) cout << ' ';
        for (int j = 0; j < star; j++) cout << '*';
        cout << '\n';
    }


}