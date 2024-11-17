#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


int main(){
   Faster;
   int T;                     cin>>T;
   while(T--){
      ll n,k,q;               cin>>n>>k>>q;

      vector<ll> a(n);
      for(int i=0;i<n;i++){
         cin>>a[i];
      }

      ll ans=0;

      ll cons=0;
      for(int i=0;i<n;i++){
         if(a[i]<=q){
            cons++;
            if(i==n-1 or a[i+1]>q){
               if(cons>=k){
                  ll x=cons-k+1LL;
                  ll add=(x*(x+1LL))/2LL;
                  ans+=add;
               }
               cons=0;
            }
         }
      }

      cout<<ans<<endl;
   }
   return 0;
}
