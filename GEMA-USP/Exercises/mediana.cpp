#include <bits/stdc++.h>
using namespace std;

int l[200000];
multiset<int> maxh, minh;

void balance() {
    while(minh.size() >= maxh.size()+1) {
        auto it = minh.begin();
        maxh.insert(*it);
        minh.erase(it);
    }

    while(maxh.size() >= minh.size()+2) {
        auto it = maxh.rbegin();
        minh.insert(*it);
        maxh.erase(next(it).base());
    }
}

int main(void) {
    int n=0,k=0;

    cin >> n >> k;

    for(int i=0; i<n; i++) {
        cin >> l[i];
    }

    for(int i=0; i<k; i++)
        minh.insert(l[i]);
    balance();

    for(int i=1; i<n-k+1; i++) {  
        int median = *maxh.rbegin();
        cout << median << " ";

        int next = l[i+k-1];
        
        if(median >= next) {
            maxh.insert(next);
        } else {
            minh.insert(next);
        }

        int old = l[i-1];
        if(median >= old) {
            auto oldit = maxh.find(old);
            maxh.erase(oldit);
        } else {
            auto oldit = minh.find(old);
            minh.erase(oldit);
        }

        balance();
    }

    int median = *maxh.rbegin();
    cout << median;
    
    return 0;
}