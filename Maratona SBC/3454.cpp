#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string s;
    cin >> s;

    if(s == "XOX") cout << "*";
    else if(s == "XXO" || s == "OXX") cout << "Alice";
    else cout << "?";
    cout << endl;
}