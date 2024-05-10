#include <bits/stdc++.h>
using namespace std;

int n,a,b,c;
char res[163];

int main() {
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> a >> b >> c;

        if(a+b == c)
            res[i] = '+';
        else 
            res[i] = '-';
    }

    for(int i = 0; i < 163; i++) {
        if(res[i] == '\0')
            break;
        
        cout << res[i] << endl;
    }

    return 0;
}