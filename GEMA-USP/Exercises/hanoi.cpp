#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n=1;
    int i = 1;
    while(n>0) {
        cin >> n;
        if(n>0) {
            if(i>1) cout << "\n\n";
            cout << fixed;
            cout << "Teste " << i << '\n' << (long long int)(pow(2, n) - 1);
            i++;
        }
    }
    
    return 0;
}