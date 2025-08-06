#include<iostream>
#include<string>
using namespace std;

int main() {
    string s; cin >> s;
    int weight[7] = {2,7,6,5,4,3,2};

    int sum = 0;
    for (int i = 0; i < 7; i++) {
        sum += (s[i] - '0') * weight[i];
    }

    char code[11] = {'J', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'Z'};
    int ans = sum % 11;
    cout << code[ans];
}