#include <bits/stdc++.h>
using namespace std;

int n, val, last, c, m;

int main() {
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> val;

        if(i==0) {
            last = val;
            c++;
        }
        else {
            if(last == val) {
                c++;
            } else {
                last = val;
                if(c > m)
                    m = c;
                c = 1;
            }
        }
        
    }

    if(c > m)
        m = c;

    cout << m;
    return 0;
}