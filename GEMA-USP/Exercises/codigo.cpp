#include <bits/stdc++.h>
using namespace std;

int n, t;

int main() {
    cin >> n;
    char s[n];

    for(int i = 0; i < n; i++) {
        cin >> s[i];
    }

    for(int i = 0; i < n-2; i++) {
        if(s[i] == '1') {
            if(s[i+1] == '0' && s[i+2] == '0') {
                t++;
            }
        }
    }

    cout << t;
    return 0;
}