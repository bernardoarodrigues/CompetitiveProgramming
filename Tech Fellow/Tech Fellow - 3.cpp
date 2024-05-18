#include <bits/stdc++.h>
using namespace std;

int main() {
	int x=0, y=0, count=0;
    cin >> x >> y;

    bitset<16> binaryX(x), binaryY(y);

    for(int i=0; i<16; i++) {
        if(binaryX[i] != binaryY[i]) count++;
    }

    cout << count;
    
	return 0;
}
