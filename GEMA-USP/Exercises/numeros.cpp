#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int x = n+(k-(n%k));
    cout << x;
    return 0;
}