#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int n,c,m,falt;

int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;

        if (arr[m] == x)
            return m;

        if (arr[m] < x)
            l = m + 1;

        else
            r = m - 1;
    }

    return -1;
}

int main(void) {
    cin >> n >> c >> m;
    int car[c], compr[m];

    for(int i=0; i<c; i++) {
        scanf("%d", &car[i]);
    }
    for(int i=0; i<m; i++) {
        cin >> compr[i];
    }

    sort(compr, compr+m);

    for(int fig : car) {
        int result = binarySearch(compr, 0, m - 1, fig);
        if(result == -1) falt++;
    }
    printf("%d", falt);
    return 0;
}