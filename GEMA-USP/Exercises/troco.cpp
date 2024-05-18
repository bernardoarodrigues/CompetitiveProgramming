#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int v;
    cin >> v;

    int ms[] = {100, 50, 25, 10, 5, 1};
    int i=0, cont=0;

    while (v>0) {
        if(v >= ms[i]) {
            v-=ms[i];
            cont++;
        } else {
            i++;
        }
    }

    cout << cont;
}