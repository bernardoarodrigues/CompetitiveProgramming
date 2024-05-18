#include <bits/stdc++.h>                   
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n, k, m;
        cin>>n>>k>>m;
        string s;
        cin>>s;
        string res="";
        bool found[k];
        memset(found, false, sizeof(found));
        int count=0;
        for(char c:s)
        {
            if(res.size()==n)
                break;
            count+=(!found[c-'a']);
            found[c-'a']=true;
            if(count==k)
            {
                memset(found, false, sizeof(found));
                count=0;
                res+=c;
            }
        }
        if(res.size()==n)
            cout<<"YES\n";
        else
        {
            cout<<"NO\n";
            for(int i=0;i<k;i++)
            {
                if(!found[i])
                {
                    while(res.size()<n)
                        res+=(char)('a'+i);
                }
            }
            cout<<res<<"\n";
        }
    }
}