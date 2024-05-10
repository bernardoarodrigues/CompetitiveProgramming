#include <bits/stdc++.h>
using namespace std;

int t;
char temp[20];

int main() {
    cin >> t;

    for(int i = 0; i < t; i++) {
        int n = 0;
        string a,b,c;
        bool okt = false;

        cin >> n >> a >> b >> c;
        
        for(int i = 0; i < n; i++) {
            if(a[i] != c[i] && b[i] != c[i]) {
                okt = true;
            }
        }
        okt ? cout << "YES" : cout << "NO";
        cout << endl;
    }

    return 0;
}