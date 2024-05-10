#include <bits/stdc++.h>
using namespace std;

int n;
string s;

int main(void) {
    cin >> n;
    
    for(int i=0; i<=n; i++) {
        string st;
        getline(cin, st);
        if(!st.length()) continue;
        for(char c : st) {
            if(c == '{' || c == '}')
                s += c;
        }
    }
    
    int n=s.length();
    stack<char> ss;
    for(int i=0;i<n;i++) {
        if(ss.empty()) {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[') ss.push(s[i]);
            else {
                printf("N");
                return 0;
            }
        }
        else if(s[i]=='(' || s[i]=='{' || s[i]=='[') ss.push(s[i]);
        else {
            if(ss.top()=='(' && s[i]==')') ss.pop();
            else if(ss.top()=='[' && s[i]==']') ss.pop();
            else if(ss.top()=='{' && s[i]=='}') ss.pop();
            else {
                printf("N");
                return 0;
            }
        }
    }
    if(ss.size()==0) printf("S");
    else printf("N");
    
    return 0;
}