#include <bits/stdc++.h>
using namespace std;

int f[10000], e[100000], poss[200000000];

int main() {
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++) {
        cin >> f[i];
    }

    for(int i=0; i<n; i++) {
        cin >> e[i];
    }    

    int pos=0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            poss[pos] = f[i]+e[j];
            poss[pos+1] = f[i]-e[j];
            pos+=2;
        }
    }
    pos-=2;

    sort(poss, poss+pos);

    for(int i=0; i<pos; i++) {
        cout << poss[i] << " ";
    }

    set<int> g, e; vector<int> vec;
    for(int x : g) {
        for(int y : e) 
            vec.push_back(x+y);
            
    }

    // int cur=0, last=0, max=0;
    // for(int i=0; i<pos; i++) {
    //     int x = poss[i];

    //     if(i == 0) {
    //         last = x; 
    //         cur++;
    //     }
    //     else {
    //         if(i == pos-1) {
    //             cout << cur;
    //             if(cur >= max) {
    //                 cout <<  << endl;
    //                 return 0;
    //             }
    //         }

    //         if(x == last) {
    //             cur++;
    //         }
    //         else {
    //             //cout << x << " " << cur << " " << max;
    //             if(cur >= max) {
    //                 cout << last << endl;
    //                 max = cur;
    //             }
    //             last = x;
    //             cur = 1;
    //         }
    //     }
    // }
}