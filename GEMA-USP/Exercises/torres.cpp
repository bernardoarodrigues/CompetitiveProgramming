#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;

    vector<int> cubes(n);
    for (int i = 0; i < n; ++i) {
        cin >> cubes[i];
    }

    vector<int> towers;

    for (int i = 0; i < n; ++i) {
        int cube = cubes[i];

        auto it = upper_bound(towers.begin(), towers.end(), cube);
        if (it != towers.end()) {
            *it = cube;
        } else {
            towers.push_back(cube); 
        }
    }

    cout << towers.size() << endl;

    return 0;
}