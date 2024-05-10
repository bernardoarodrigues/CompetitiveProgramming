#include <bits/stdc++.h>
using namespace std;

int a,b,c,d;

int main(void) {
    cin >> a >> b >> c >> d;
    if(a==c || b==d)
        printf("V");
    else
        printf("F");
    return 0;
}