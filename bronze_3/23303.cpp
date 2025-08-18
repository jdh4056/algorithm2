#include<iostream>
#include<string>
using namespace std;

int main() {
    string s;
    getline(cin,  s);

    if (s.find("D2") != string::npos || s.find("d2") != string::npos)
        cout << "D2";
    else
        cout << "unrated";

}