#include <bits/stdc++.h>
using namespace std;

bool isC(char c) { return !(c == 'a' || c == 'e'); }

int main() {
    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {
        int n; 
        string s;
        vector<string> answer;

        cin >> n >> s;

        for(int c = 0; c < n; c++) {
            if(isC(s[c]) && (c+1 < n && !isC(s[c+1]))) {
                string syl;
                syl.push_back(s[c]);
                syl.push_back(s[c+1]);
                answer.push_back(syl);
                c++;
            } else {
                string syl = answer.back();
                syl.push_back(s[c]);
                answer.pop_back();
                answer.push_back(syl);
            }
        }

        int len = answer.size();

        for(int j = 0; j < len; j++) {
            if(j+1 < len)
                cout << answer[j] << '.';
            else
                cout << answer[j];
        }
        cout << '\n';
    }
    return 0;
}