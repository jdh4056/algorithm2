#include<bits/stdc++.h>
using namespace std;

int main() {
    double w, h;
    cin >> w >> h;
    double bmi = w / (h*h);
    if (bmi > 25.0) {
        cout << "Overweight";
    } else if (bmi >= 18.5 && bmi <= 25.0) {
        cout << "Normal weight";
    } else if (bmi < 18.5) {
        cout << "Underweight";
    }
}