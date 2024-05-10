#include <bits/stdc++.h>
using namespace std;

int friends[100][3], n, t, maxf;

int main() { 
    cin >> n;

    for(int i = 0; i < n; i++) {
        char first;
        int second;

        cin >> first >> second;

        if(first == 'R') {
            if(maxf < second)
                maxf = second;
            friends[second-1][0] = 1;
            friends[second-1][2] = t;
            t += 1;
        } else if(first == 'E') {
            friends[second-1][0] = 0;
            friends[second-1][1] += t - friends[second-1][2];
            t += 1;
        } else {
            t += second - 1;      
        }
    }

    for(int i = 0; i < 100; i++) {
        if(friends[i][0] == 1) {
            cout << i+1 << " -1";
            if(i+1 < maxf) {
                cout << endl;
            }
        }
        else if(friends[i][1] != 0) {
            cout << i+1 << " " << friends[i][1];
            if(i < maxf)
                cout << endl;
        }
    }  

    return 0;
}