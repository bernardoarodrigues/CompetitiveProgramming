#include <bits/stdc++.h>
using namespace std;

int n, m, pos;

int main() {
    cin >> n;

    for(int i = 0; i < n; i++) {
        int v;
        cin >> v;
        if(i == 0) {
            m = v;
            pos = 0;
        }
        else {
            if(v < m) {
                m = v;
                pos = i;
            }
        }
    }

    cout << "Menor valor: " << m << endl << "Posicao: " << pos << endl;

    return 0;
}