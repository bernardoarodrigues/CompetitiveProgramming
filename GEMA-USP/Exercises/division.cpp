#include <bits/stdc++.h>
using namespace std;

int n, r;

int main() {
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> r;
        if(r >= 1900) {
            cout << "Division 1" << endl;
        } else if(r <= 1899 && r >= 1600) {
            cout << "Division 2" << endl;
        } else if(r <= 1599 && r >= 1400) {
            cout << "Division 3" << endl;
        } else {
            cout << "Division 4" << endl;
        }
    }

    return 0;
}