#include <bits/stdc++.h>
using namespace std;

int main(void) {    
    int n,b,res=0;
    cin >> n >> b;

    vector<int> arq;

    for(int i=0; i<n; i++) {
        int x;
        cin >> x;

        if(x == b) {
            res++;
        } else {
            arq.push_back(x);
        }
    }

    sort(arq.begin(), arq.end());

    while(!arq.empty()) {
        int y=arq.size()-1;
        auto p1=arq.begin(); auto p2=arq.end(); p2--;

        while(arq[0]+arq[y] > b && y) {
            y--;
            p2--;
        }

        res++;
        arq.erase(p2);
        if(y)
            arq.erase(p1);
    }

    cout << res;
}
