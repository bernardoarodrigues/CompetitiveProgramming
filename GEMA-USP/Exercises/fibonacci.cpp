#include <bits/stdc++.h>
using namespace std;

int n = 0;

int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}
 
int main()
{
    cin >> n;
    cout << fib(n+1);
    return 0;
}