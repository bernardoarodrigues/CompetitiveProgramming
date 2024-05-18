#include <bits/stdc++.h>
using namespace std;

int main(void) {
    unsigned long long n, k;
    cin >> n >> k;
    //(2N-1) - (sqrt(valcarlos) - 1) = 2N - sqrt(valcarlos) + 1
    unsigned long long number = (2*n-1) - (long long)sqrt(k) + 2;
    cout << (unsigned long long)(number*number) << '\n';

    //valcarlos-(sqrt(valcarlos)-1)²

}