#include <bits/stdc++.h>
using namespace std;

int main() {
    int p1, c1, p2, c2;

    scanf("%d %d %d %d", &p1, &c1, &p2, &c2);

    int r1 = p1*c1, r2 = p2*c2;

    if(r1 > r2) {
        cout << -1;
    } else if(r1 == r2) {
        cout << 0;
    } else {
        cout << 1;
    }
    return 0;
}