#include <bits/stdc++.h>
using namespace std;

int m[1010][1010], sumt[1010][1010];
int suml[1010], sumc[1010];
int n, maximo, stot;

int main() {
    cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> m[i][j];
            suml[i] += m[i][j];
            sumc[j] += m[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            int s = suml[i] - m[i][j] + sumc[j] - m[i][j];
            if(stot < s)
                stot = s;
        }
    }

    if(maximo < stot) {
        maximo = stot;
    }

    cout << maximo;
    return 0;
}