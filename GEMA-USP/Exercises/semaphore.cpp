#include <bits/stdc++.h>
using namespace std;

set<int> r;

int main(void) {
    int x=0, n=0;
    cin >> x >> n;
    r.insert(x);

    for(int i=0; i<n; i++) {
        int s=0;
        scanf("%d", &s);
        r.insert(s);

        int cmax=0, a=0;
        auto it = r.begin();
        for(int i=0; i<r.size(); i++) {
            /*int c=0;

            c = *it - a;
            
            if(c > cmax) {
                cmax = c;
            }

            a = *it;*/
            printf("%d ", *it);
            it++;
        }

        cout << cmax << " ";
    }

    
    return 0;
}