#include <bits/stdc++.h>
using namespace std;

multiset<long long> ts;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    for(int i=0; i<n; i++) {
        long long h;
        cin >> h;
        ts.insert(h);
    }

    for(int i=0; i<m; i++) {
        long long t;
        cin >> t;

        if(ts.empty() || *ts.begin() > t) {
            cout << "-1\n";
            continue;
        }

        multiset<long long>::iterator it = ts.lower_bound(t);

        if(*it != t)
            it--;
        cout << *it << "\n";         
            
        ts.erase(it);
    }
}