#include <bits/stdc++.h>
using namespace std;

int main() {
	int x1=0, y1=0, x2=0, y2=0;
    cin >> x1 >> y1 >> x2 >> y2;

    if(x1 == x2 && y1 == y2) cout << 0;
    else {
        if(x1 == x2 || y1 == y2) cout << 1;
        else if(abs(x1-x2) == abs(y1-y2)) cout << 1;
        else cout << 2;
    }
    
	return 0;
}
