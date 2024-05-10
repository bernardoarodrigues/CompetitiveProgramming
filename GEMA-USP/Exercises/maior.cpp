#include <bits/stdc++.h>
using namespace std;

int v[9], m;

int main() {
    for(int i = 0; i < 9; i++) {
        cin >> v[i];
        if(i == 0)
            m = v[i];
        else if(v[i] > m)
            m = v[i];
    }

    for(int i = 0; i < 9; i++) {
        if(v[i] == m)
            v[i] = -1;
    }

    cout << v[0] << " " << v[1] << " " << v[2] << endl;
    cout << v[3] << " " << v[4] << " " << v[5] << endl;
    cout << v[6] << " " << v[7] << " " << v[8] << endl;

    return 0;
}

