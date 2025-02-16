#include<bits/stdc++.h>
#define ll long long int
#define in(v) for(int i=0;i<v.size();i++) cin>>v[i];
#define out(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
#define vi vector<ll>
#define cyes cout<<"yes"<<endl;
#define cno cout<<"no"<<endl;

#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--){;
        ll n,k,b,missed,last;
        cin>>n>>k;
        vi v,t;
        for(ll i = 0 ; i < n ; i++) {
            cin>>b;
            v.push_back(b);
        }
        t = v;
        sort(t.begin(), t.end());
        missed = n;
        for(ll i = 0; i < n ; i++) {
            if(t[i] != i) {
                missed = i;
                break;
            }
        }
        ll bkp;
        for(ll i = 0 ; i < n ; i++) {
            bkp = v[i];
            v[i] = missed;
            missed = bkp;   
        }
        v.push_back(missed);
        
        last = (k-1)%(n+1);
        for(ll i = (n+1-last); i < (n+1) ; i++) {
            cout<<v[i]<<" ";
        }
        for(ll i = 0; i < (n-last); i++) {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }       
    return 0;
}