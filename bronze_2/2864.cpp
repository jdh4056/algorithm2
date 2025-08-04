#include<iostream>
#include<string>
using namespace std;

int main() {
    string a,b; cin >> a >> b;

    string mxA = a, mnA = a;
    string mxB = b, mnB = b;
    int sz = max(a.size(), b.size());

    for (int i = 0; i < sz; i++) {
        if (mnA[i] == '6') {
            mnA[i] = '5';
        }
        if (mnB[i] == '6') {
            mnB[i] = '5';
        }
    }

    int resmna = stoi(mnA);
    int resmnb = stoi(mnB);
    cout << resmna + resmnb << " ";

    for (int i = 0; i < sz; i++) {
        if (mxA[i] == '5') {
            mxA[i] = '6';
        }
        if (mxB[i] == '5') {
            mxB[i] = '6';
        }
    }

    int resmxa = stoi(mxA);
    int resmxb = stoi(mxB);
    cout << resmxa + resmxb;
}