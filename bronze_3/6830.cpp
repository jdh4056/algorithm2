#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<utility>
using namespace std;

int main() {
    vector<pair<string, int>> v;

    while (true) {
        string s;
        getline(cin, s);

        istringstream iss(s);
        string city;
        string temp;

        iss >> city >> temp;

        int temp2num = stoi(temp);
        v.push_back({city, temp2num});

        if (city == "Waterloo") break;
    }

    int mn = 0;
    string mncity;
    for (int i = 0; i < v.size(); i++) {
        if (mn > v[i].second) {
            mn = v[i].second;
            mncity = v[i].first;
        }
    }

    cout << mncity;
}