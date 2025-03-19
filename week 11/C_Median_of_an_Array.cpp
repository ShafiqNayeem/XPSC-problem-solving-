#include<bits/stdc++.h>
#define ll long long int
#define fl(i,start,end) for(int i=start;i<=end;i++)

#define br <<endl
#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;
void solve(){
 ll n; cin>>n;
 ll arr[n];
 fl(i,1,n) cin>>arr[i];
 sort(arr+1,arr+n+1);
 ll ok=(n+1)/2,yes;
 yes=arr[ok];
 ll ans=0;
 fl(i,ok,n){
    if(yes==arr[i]) ans++;
    else break;
    
 }
 cout<<ans br;
}
int main()
{
    fast;
 int t; cin>>t;
while(t--) solve();
    return 0;
}