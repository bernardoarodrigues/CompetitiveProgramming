#include <bits/stdc++.h>
using namespace std;

int n, f[10000];

int main() {
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> f[i];
    }

    for(int i = 0; i < n; i++) {
        if(f[i] == -1) {    
            int a=10001,b=10001;
            if(i == 0) {
                for(int j = i+1; j < n; j++) {
                    if(f[j] == 0) {
                        a = j-i;
                        break;
                    }
                }
            }
            else if(i < n-1) {
                for(int j = i+1; j < n; j++) {
                    if(f[j] == 0) {
                        a = j-i;
                        break;
                    }
                }
                for(int j = i-1; j >= 0; j--) {
                    if(f[j] == 0) {
                        b = i-j;
                        break;
                    }
                }
            } else {
                for(int j = i-1; j >= 0; j--) {
                    if(f[j] == 0) {
                        b = i-j;
                        break;
                    }
                }
            }

            if(a > 9) a = 9;
            if(b > 9) b = 9;

            f[i] = min(a,b);
        }
    }

    for(int i = 0; i < n; i++) {
        cout << f[i] << " ";
    }

    return 0;
}