#include<iostream>

using namespace std;

int main() {
    char c[4];
    for (int i = 0; i < 4; i++) cin >> c[i];

    if (c[0] == 'I') c[0] = 'E';
    else if (c[0] == 'E') c[0] = 'I';

    if (c[1] == 'N') c[1] = 'S';
    else if (c[1] == 'S') c[1] = 'N';

    if (c[2] == 'F') c[2] = 'T';
    else if (c[2] == 'T') c[2] = 'F';

    if (c[3] == 'P') c[3] = 'J';
    else if (c[3] == 'J') c[3] = 'P';

    for (char ch : c) cout << ch;
}