


#include<bits/stdc++.h>
#define ll long long int
#define fl(i,n) for(int i=0;i<n;i++) 
#define all(v) v.begin(),v.end()
#define in(v) for(int i=0;i<v.size();i++) cin>>v[i];
#define out(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
#define vi vector<int>
#define vll vector<ll>

#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;
void slove(){
    int n; cin>>n;
    vll a(n);
    in(a);
    ll max_a=*max_element(all(a));
    ll gcd_z=0;
    ll total_stolen=0;
    fl(i,n){
        ll diff=max_a-a[i];
        gcd_z=__gcd(gcd_z,diff);
        total_stolen+=diff;
    }
    ll y=total_stolen/gcd_z;
    cout<<y<<" "<<gcd_z<<endl;


 
}
int main()
{
    fast;
//  int t; cin>>t;
// while(t--)
 slove();
    return 0;
}
