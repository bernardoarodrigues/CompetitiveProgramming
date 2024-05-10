#include <bits/stdc++.h>
using namespace std;

int N[100000];

int binarySearch(int q, int p1, int p2) {
    int midI = p1 + (p2-p1)/2;
    int mid = N[midI];

    if(q < mid)
        return binarySearch(q, p1, midI-1);
    else if(q > mid)
        return binarySearch(q, midI+1, p2);
    else 
        return midI;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    
    int n, q;
    cin >> n >> q;

    for(int i=0; i<n; i++) {
        cin >> N[i];
    }

    for(int i=0; i<q; i++) {
        int query;
        cin >> query;
        if(query > N[n-1] || query < N[0]) cout << "-1\n";
        else cout << binarySearch(query, 0, n-1) << "\n";
    }

    cout.flush();
    return 0;
}