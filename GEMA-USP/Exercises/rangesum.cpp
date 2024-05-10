#include <bits/stdc++.h>
using namespace std;

const int maxN = 2e5;
int n, q, a, b;
long long l[maxN+1];

int main(void) {
    scanf("%d %d", &n, &q);
    
    for(int i=1; i<=n; i++) {
        scanf(" %lld", &l[i]);
        l[i] += l[i-1];
    }
    for(int i=0; i<q; i++) {
        scanf("%d %d", &a, &b);
        printf("%lld\n", l[b]-l[a-1]);
    }

    return 0;
} 