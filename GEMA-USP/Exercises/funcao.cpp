#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n;

    cin >> n;

    if(n % 2) {
        //impar
        cout << (-1 * (n+1)/2);
    } else {
        //par
        cout << (n+1)/2;
    }

    return 0;
}