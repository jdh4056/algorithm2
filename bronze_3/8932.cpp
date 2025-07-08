#include<iostream>
#include<cmath>
using namespace std;

struct Event {
    double a,b,c;
    bool isTrack;
};

Event ev[7] = {
    {9.23076, 26.7, 1.835, true},
  {1.84523, 75, 1.348, false},
  {56.0211, 1.5, 1.05, false},
  {4.99087, 42.5, 1.81, true},
  {0.188807, 210, 1.41, false},
  {15.9803, 3.8, 1.04, false},
  {0.11193, 254, 1.88, true}
};

int main() {
    int t; cin >> t;
    while (t--) {
        int res = 0;
        for (int i = 0; i < 7; i ++) {
            int p; cin >> p;
            if (ev[i].isTrack) {
                res += ev[i].a * pow(ev[i].b - p, ev[i].c);
            } else {
                res += ev[i].a * pow(p- ev[i].b, ev[i].c);
            }
        }
        cout << res << '\n';
    }
}