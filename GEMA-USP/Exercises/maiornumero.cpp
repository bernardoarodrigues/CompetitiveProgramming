#include <bits/stdc++.h>
using namespace std;

int n, m;

int main() {
    cin >> n;
    while (n != 0) {
        if(n > m)
            m = n;
        cin >> n;
    }

    cout << m;

    return 0;
}