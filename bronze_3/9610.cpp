#include<iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int q1 = 0,q2 = 0,q3 = 0,q4 = 0, axis = 0;
    while (n--) {
        int x,y; cin >> x >> y;
        if (x < 0 && y < 0) q3++;
        else if (x < 0 && y > 0) q2++;
        else if (x > 0 && y < 0) q4++;
        else if (x > 0 && y > 0) q1++;
        else if(x == 0 || y == 0) axis++;
    }

    cout << "Q1: " << q1 << '\n';
    cout << "Q2: " << q2 << '\n';
    cout << "Q3: " << q3 << '\n';
    cout << "Q4: " << q4 << '\n';
    cout << "AXIS: " << axis;
}