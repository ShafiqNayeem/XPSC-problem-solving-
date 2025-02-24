#include<bits/stdc++.h>
#define ll long long int
#define fl(i,start,end) for(int i=start;i<end;i++)
#define flr(i,start,end) for(int i=start;i>end;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define in(v,n) for(int i=1;i<=n;i++) cin>>v[i];
#define out(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
#define vi vector<int>
#define vll vector<ll>
#define vc(type) vector<type>
#define br endl
#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;
void slove(){
    
    int n,q; cin>>n>>q;
        vll a(n+1,0); in(a,n);
            
        
        vll pref(n+2,0);
        for(int i=1;i<=n;i++)     pref[i]=(a[i]+pref[i-1]);
        
        vll ans(q);
        vector<pair<ll,int>> k(q);
        fl(i,0,q){
            cin>>k[i].first;
            k[i].second=i;
        }
        sort(all(k));
        int AP=0;
        fl(i,0,q){
            while(true){
                if(AP==n or a[AP+1]>k[i].first)break;
                AP++;
            }
            ans[k[i].second]=pref[AP];
        }
 
        out(ans);
        cout<<br;
}
int main()
{
    fast;
 int t; cin>>t;
while(t--) slove();
    return 0;
}