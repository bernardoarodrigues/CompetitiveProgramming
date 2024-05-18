#include <bits/stdc++.h>
using namespace std;

int main(void) {
    long double a,b,c; char t;
    cin >> a >> b >> c >> t;

    switch (t)
    {
        case 'A':
            cout << (unsigned long long)(a + (long double)(3*b/2) + (long double)(5*c/2));
            break;
        
        case 'B':
            cout << (unsigned long long)((long double)(2*a/3) + b + (long double)(5*c/3));
            break;

        case 'C':
            cout << (unsigned long long)((long double)(2*a/5) + (long double)(3*b/5) + c);
            break;

        default:
            break;
    }

    cout << endl;
}