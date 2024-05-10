#include <bits/stdc++.h>
using namespace std;

int x,y;

int main() {
    cin >> x >> y;

    if(x > 0 && y > 0) {
        cout << "Q1";
    } else if(x < 0 && y > 0) {
        cout << "Q2";
    } else if(x < 0 && y < 0) {
        cout << "Q3";
    } else if(x > 0 && y < 0) {
        cout << "Q4";
    } else if(x == 0 || y == 0) {
        cout << "eixos";
    }
    return 0;
}