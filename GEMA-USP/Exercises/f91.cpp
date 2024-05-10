#include <bits/stdc++.h>
using namespace std;

int x;

int f91(int n) {
    if(n <= 100) {
        return f91(f91(n+11));
    } else if(n >= 101) {
        return n-10;
    }
}

int main() {
    cin >> x;
    while(x != 0) {
        cout << "f91(" << x << ") = " << f91(x) << endl;
        cin >> x;
    }
    return 0;
}