#include <bits/stdc++.h>
using namespace std;

int n, f=1, x=1;

int main() {
    cin >> n;
    while(x<=n) {
        f *= x;
        x++;
    }
    cout << f;
    return 0;
}