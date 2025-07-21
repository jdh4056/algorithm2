#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int n; cin >> n;
    while (n--) {
        double a,b; cin >> a >> b;
        double h = (2*a) / b;

        cout << fixed << setprecision(2) << "The height of the triangle is " << h  << " units\n";
    }
}