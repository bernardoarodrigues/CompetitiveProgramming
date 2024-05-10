#include <bits/stdc++.h>
using namespace std;

int n;
set<int> el;

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        int e;
        cin >> e;
        if(el.find(e) == el.end()) {
            el.insert(e);
        }
    }
    cout << el.size();
    return 0;
}