#include<iostream>
#include<vector>
using namespace std;

int main() {
    long long N; int K;
    cin >> N >> K;

    vector<int> up = {4, 11, 23, 40, 60, 77, 89, 96, 100};

    for (int i = 0; i < K; ++i) {
        long long G; cin >> G;
        long long P = (G * 100) / N;
        int grade = int(lower_bound(up.begin(), up.end(), (int)P) - up.begin()) + 1;
        cout << grade << ' ';
    }
}