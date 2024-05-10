#include <bits/stdc++.h>
using namespace std;

int n, a, b;

int main() {
    cin >> n;

    for(int i = 0; i < n; i++) {
        int v;
        cin >> v;
        if(v == 1) {
            a = 1-a;
        } else {
            a = 1-a;
            b = 1-b;
        }
    }

    cout << a << endl << b;
    return 0;
}