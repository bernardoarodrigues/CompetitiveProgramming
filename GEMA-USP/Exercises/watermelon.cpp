#include <bits/stdc++.h>
using namespace std;

int w;

int main() {
    cin >> w;

    if(w <= 2)
        cout << "NO";
    else
        !(w % 2) ? cout << "YES" : cout << "NO";

    return 0;
}