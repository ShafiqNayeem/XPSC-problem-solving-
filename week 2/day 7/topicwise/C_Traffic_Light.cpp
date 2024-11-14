#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--) {
        ll n; cin>>n;
        string x, s; cin>>x>>s;
        s += s;
        bool f = false;
        int cnt = 0, res = 0;
        
        if(x[0] == 'g') {
            cout<<0<<endl;
            continue;
        }
        
        for(int i=0; i<s.size(); i++) {
            if(s[i] == 'g') {
                res = max(res, cnt);
                f = false;
            }
 
            if(s[i] == x[0] && f == false) {
                f = true;
                cnt = 0;
            }
 
            if(f) cnt++;
        }
 
        cout<<res<<endl;
    }
}