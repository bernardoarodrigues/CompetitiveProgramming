#include <bits/stdc++.h>
using namespace std;

multiset<int> A, B;
set<int> already;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    for(int i=0; i<a; i++) {
        int x;
        cin >> x;
        A.insert(x);
    }

    for(int i=0; i<b; i++) {
        int x;
        cin >> x;
        B.insert(x);
    }

    int c1=0, c2=0;
    for(multiset<int>::iterator it = A.begin(); it != A.end(); it++) {
        if(!already.empty())
            if(*already.lower_bound(*it) == *it)
                continue;
        already.insert(*it);
        if(*B.lower_bound(*it) != *it) {
            c1++;
        }
    } 

    already.clear();
    for(multiset<int>::iterator it = B.begin(); it != B.end(); it++) {
        if(!already.empty())
            if(*already.lower_bound(*it) == *it)
                continue;
        already.insert(*it);
        if(*A.lower_bound(*it) != *it) {
            c2++;
        }
    }

    cout << min(c1, c2);
} 
