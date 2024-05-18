#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e6;
int freq[26];
char p[maxN], palin[maxN];

int main(void) {
    int n=0, last=0;
    char mid=0;

    scanf("%s%n", p, &n);

    if(n==1) {
        cout << p;
        return 0;
    }

    for(int i=0; i<n; i++) {
        freq[p[i]-65]++;
    }

    if(n % 2 == 0) {
        for(int i=0; i<n; i++) {
            int freqC = freq[((int)p[i])-65];
            if(freqC % 2) {
                cout << "NO SOLUTION";
                return 0;
            }
        }

        for(int i=0; i<26; i++) {
            if(freq[i] % 2 == 0 && freq[i]) {
                for(int a=0; a<freq[i]/2; a++) {
                    palin[last] = i+65;
                    last++;
                }
            }
        }

        for(int i=0; i<last; i++) {
            cout << palin[i];
        }

        for(int i=last-1; i>=0; i--) {
            cout << palin[i];
        }
        cout << "\n";
    } else {
        int f1 = 0, par=0;
        for(int i=0; i<n; i++) {
            int freqC = freq[((int)p[i])-65];
            if(freqC % 2) {
                f1++;
            }
            if(freqC % 2 != 0) {
                mid = p[i];
                freq[((int)p[i])-65]--;
            }
        }

        for(int i=0; i<26; i++) {
            if(freq[i] > 1) {
                for(int a=0; a<freq[i]/2; a++) {
                    palin[last] = i+65;
                    last++;
                }
            }
        }

        if(f1 > 1) {
            cout << "NO SOLUTION";
            return 0;
        } 

        for(int i=0; i<last; i++) {
            cout << palin[i];
        }

        if(mid!=0) cout << mid;

        for(int i=last-1; i>=0; i--) {
            cout << palin[i];
        }
        cout << "\n";
    }

    return 0;
}