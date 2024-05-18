#include <iostream>
using namespace std;

int main() {
	int n;
    long long int somaFatorial=0;
    cin >> n;

    for(int i=0; i<n; i++) {
        long long int f=0, fatorial = 1;
        cin >> f;

        for(int j=1; j<=f; j++)
            fatorial *= j;
        
        somaFatorial += fatorial;
    }

    cout << somaFatorial;
    
	return 0;
}
