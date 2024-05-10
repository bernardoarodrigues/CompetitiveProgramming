#include <bits/stdc++.h>
using namespace std;

int n[10];

int main() {
    cin >> n[0];
    cout << "N[0] = " << n[0] << endl;

    for(int i = 1; i <= 9; i++) {
        n[i] = 2*n[i-1];
        cout << "N[" << i << "] = " << n[i] << endl;
    }   

    return 0;
}