#include <bits/stdc++.h>
using namespace std;

int x=0, c=0, cnum=1;

/*9 (3)
4 5
2 2 2 3*/

void op(int n, int k) {
    if(n <= k) {
        c = 2*cnum;
        return;
    }
    
    //cout << "oi: " << cnum;
    if(n%2) {
        //cnum++;
        cnum = x/(n-1);
        op((n+1)/2, k);
        op((n-1)/2, k);
    } else {
        cnum = x/n;
        op(n/2, k);
    }
}

int main(void) {
    int n=1, k=1;
    cin >> n >> k;
    while(n!=0 && k!=0) {
        x = n;
        c = 0;
        if(n <= k) cout << 1 << "\n";
        else {
            op(n, k);
            cout << c << "\n";
        }
        cin >> n >> k;
    }
    return 0;
} 