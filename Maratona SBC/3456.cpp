#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned long long x;
    cin >> x;

    while (x>=10) {
        cout << x << '\n';
        x = 3*(x/10) + x-(x/10)*10;
    } 
}   