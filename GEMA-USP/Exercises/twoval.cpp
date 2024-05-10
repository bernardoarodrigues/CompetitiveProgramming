#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k, vet[200005];
    map <int, int> map;
    cin >> n >> k;
 
    for(int i = 0; i < 200005; i++) {
        vet[i] = 0;
    }
 
    for(int i = 1; i <= n; i++) {
        cin >> vet[i];
        map[vet[i]]=i;
    }
 
    for(int i = 1; i <= n; i++) {
        int comp = k - vet[i];
        if(comp == vet[i]) {
            if (map.count(comp)) {
                if(map[comp] != i) {
                    printf("%d %d", i, map[comp]);
                    return 0;
                }
            } else {
                printf("IMPOSSIBLE");
                return 0;
            }
        }
        else if (map.count(comp)) {
            printf("%d %d", i, map[comp]);
            return 0;
        }
    }
 
    printf("IMPOSSIBLE");
 
    return 0;
}