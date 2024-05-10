#include <bits/stdc++.h>
using namespace std;

int mar[100][100], n;

int main() {
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        int xi=0, xf=0, yi=0, yf=0;
        cin >> xi >> xf >> yi >> yf;
        
        for(int x = xi; x < xf; x++) {
            for(int y = 100-yi; y > 100-yf; y--) {
                mar[x][y] = 1;
            }
        }
    }

    int area = 0;
    for(int x = 0; x < 100; x++) {
        for(int y = 0; y < 100; y++) {
            if(mar[x][y] == 1) {
                area++;
            }
        }
    }

    cout << area;

    return 0;
}