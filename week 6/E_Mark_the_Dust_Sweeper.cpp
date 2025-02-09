#include <bits/stdc++.h>
#define in(v) for (int i = 0; i < v.size(); i++) cin >> v[i];
#define out(v) for (int i = 0; i < v.size(); i++) cout << v[i] << " ";
#define vi vector<int>
#define cyes cout << "yes" << endl;
#define cno cout << "no" << endl;
#define ll long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main() {
    fast;
    
    int t;
    cin >> t;
    
    while (t--) {
        ll n;
    cin>>n;
    vector<ll> a(n);
    ll firstPositive=-1;
    ll ans=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        if(firstPositive==-1 && a[i]>0){
            firstPositive=i;
        }
    }
 
    if(firstPositive==-1 || firstPositive==n-1){
        cout<<0<<endl;
        // return 0;
        break;
    }
    
    for(ll i=firstPositive;i<n-1;i++){
        ans+=a[i];
        if(a[i]==0){
            ans++;
        }
    }
    cout<<ans<<endl;
    
    
}

    return 0;
}
