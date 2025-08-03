#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n, m; cin >> n >> m;

    int cnt = 0;
    while (n--) {
        vector<int> goal(m);
        for (int i = 0; i < m; i++) {
            cin >> goal[i];
        }

        bool b = false;
        for (int i = 0; i < m; i++) {
            if (goal[i] == 0) {
                b = true;
                break;
            }
        }

        if (!b) cnt++;
    }

    cout << cnt;
}
