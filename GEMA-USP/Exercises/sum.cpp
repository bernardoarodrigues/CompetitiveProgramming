#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n=0, x=0;
    scanf("%d %d", &n, &x);

    multiset<int> l;
    map<int, int> l2;

    for(int i=0; i<n; i++) {
        int d=0;
        scanf("%d", &d);
        l.insert(d);
        l2.insert({d, i});
    }

    if(l.size() == 1) {
        printf("IMPOSSIBLE");
        return 0;
    }

    auto p1=l.begin(), p2=l.end();
    int i=0;

    if(n & 1) {
        while(i <= n/2) {
            int sum = *p1 + *p2;
            if(sum == x) {
                int a=l2.at(*p1), b=l2.at(*p2);
                printf("%d %d", a+1, b+1);
                printf("%d %d\n", *p1, *p2);
                return 0;
            } else {
                if(sum > x) {
                    p2--;
                } else {
                    p1++; 
                }   
            }
            i++;
        }
    } else {
        while(i < n/2) {
            int sum = *p1 + *p2;
            if(sum == x) {
                int a=l2.at(*p1), b=l2.at(*p2);
                printf("%d %d", a+1, b+1);
                return 0;
            } else {
                if(sum > x) {
                    p2--;
                } else {
                    p1++; 
                }   
            }
            i++;
        }
    }

    printf("IMPOSSIBLE"); 

    return 0;
}