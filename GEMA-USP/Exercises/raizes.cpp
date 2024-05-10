#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    cin >> n;

    cout << setprecision(4) << fixed;

    for(int i = 0; i < n; i++) {
        float x;
        cin >> x;
        if(i+1==n)
            cout << (float)sqrt(x);
        else
            cout << (float)sqrt(x) << endl;
    }
    return 0;
}