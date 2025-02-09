#include<bits/stdc++.h>

#define ll long long int
#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;
int main()
{
    fast;
    
    int t; cin>>t;
    while(t--){
        ll n, mismatch = 0, flag = 0;
        cin>>n;
        string s,res = "";
        cin>>s;
        for(ll i = 0; i < n/2; i++) {
            mismatch+=(s[i]!=s[n-i-1]);
        }
        for(ll i = 0 ; i < mismatch ; i++) {
            res+="0";
        }
        if(n%2 != 0) {
            for(ll i = mismatch ; i <= (n-mismatch); i++) {
                res+="1";
            }
        }
        else {
            for(ll i = mismatch ; i <= (n-mismatch); i++) {
                res+=(flag%2 == 0)?"1":"0";
                flag++;
            }
        }
        for(ll i = 0 ; i < mismatch ; i++) {
            res+="0";
        }
        cout<<res<<endl;
    }  



    return 0;
}