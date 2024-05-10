#include <bits/stdc++.h>
using namespace std;

int n, x, y;

int main() {
    cin >> n >> x >> y;

    char s[n+1];

    cin >> s;

    for(int i = 0; i < n; i++) {
        if(s[i] == 'C') {
            x-=1;
        } else if(s[i] == 'B') {
            x+=1;
        } else if(s[i] == 'E') {
            y-=1;
        } else if(s[i] == 'D') {
            y+=1;
        } 
    }

    cout << x << " " << y;

    return 0;
}