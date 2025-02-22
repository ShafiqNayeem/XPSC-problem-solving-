#include<bits/stdc++.h>
#define ll long long int


#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;
void slove(){
 ll n; cin>>n;
 if(n==1)cout<<1<<endl;
 else if(n==2)cout<<2<<endl;
 else if(n==3)cout<<2<<endl;
 else if(n==4)cout<<2<<endl;
 else{
    ll sum=4,ans=2;
    while(sum<n){
        ans++; sum++; sum*=2;
    }
    cout<<ans<<endl;
 }
}
int main()
{
    fast;
 int t; cin>>t;
while(t--) slove();
    return 0;
}