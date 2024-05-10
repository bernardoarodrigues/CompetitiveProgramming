#include <bits/stdc++.h>
using namespace std;

string s;
bool ok = true;

int main() {
    cin >> s;

    if(s[0] != '<' || s.back() != '>') {
        ok = false;
    }
    else {
        for(int i = 1; i < s.length()-1; i++) {
            if(s[i] != '=') {
                ok = false;
                break;
            }
        }
    }

    ok ? cout << "Yes" : cout << "No";

    return 0;
}