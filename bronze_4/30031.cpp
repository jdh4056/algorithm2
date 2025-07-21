#include<iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int sum = 0;
    while (n--) {
        int a,b; cin >> a >> b;
        if (a == 136) sum += 1000;
        else if (a == 142) sum += 5000;
        else if (a == 148) sum += 10000;
        else sum += 50000;
    }
    cout << sum;
}