#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    cin >> n;
    int tab[n], res[n];
    
    for(int i=0;i<n;i++) {
        tab[i] = 0;
        res[i] = 0;
    }

    for(int i=0;i<n;i++) {
        cin >> tab[i];
    }

    if(n == 1) {
        tab[0] == 1 ? res[0] = 1 : res[0] = 0;
    } else {
        int c = 0;
        c = tab[0] + tab[1];
        res[0] = c;
        
        c = tab[n-1] + tab[n-2];
        res[n-1] = c;

        if(n > 2) {
            for(int i = 1; i < n-1; i++) {
                c = 0;
                if(tab[i-1] == 1) c++;
                if(tab[i] == 1) c++;
                if(tab[i+1] == 1) c++;
                res[i] = c;
            }
        }
    }

    for(int i=0;i<n;i++) {
        cout << res[i] << endl;
    }

    return 0;
}