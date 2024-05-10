#include <bits/stdc++.h>
using namespace std;

int m[3][3];
bool quad = true;

void checkL() {
    int sl = 0, sla = 0;

    for(int i = 0; i < 3; i++) {
        sl = m[i][0] + m[i][1] + m[i][2];
        if((i+1) % 3 == 0) {
            if(i+1 == 3)
                sla = sl;
            else if(sla != sl) {
                quad = false;
                break;
            }
            sla = sl;
        }
    }
}

void checkC() {
    int sc = 0, sca = 0;

    for(int j = 0; j < 3; j++) {
        sc = m[0][j] + m[1][j] + m[2][j];
        if(j == 0) {
            sca = sc;
        }
        else if(sca != sc) {
            quad = false;
            break;
        }
        sca = sc;

    }
}

void checkD() {
    int sd1 = m[0][0] + m[2][2];
    int sd2 = m[0][2] + m[2][0];

    if(sd1 != sd2) quad = false;
}

int main() {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> m[i][j]; 
        }
    }
    

    checkL();
    checkC();
    checkD();

    quad ? cout << "SIM" : cout << "NAO";

    return 0;
}