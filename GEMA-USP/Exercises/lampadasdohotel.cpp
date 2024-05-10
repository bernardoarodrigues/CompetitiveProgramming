#include <bits/stdc++.h>
using namespace std;

int t;

int main() {
    int ia,ib,fa,fb;

    cin >> ia >> ib >> fa >> fb;

    if(ia != fa && ib != fb) {
        t=1;
    } else if(ia != fa) {
        t=1;
    } else if(ib != fb) {  
        t=2;
    }

    cout << t;

    return 0;
}