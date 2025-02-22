#include<bits/stdc++.h>
#define ll long long int

#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;
bool isPrime(ll n){
    if(n<=1)return false;
    if(n<=3)return true;
    if (n%2==0||n%3==0)return false;
    for(ll i=5;i*i<=n;i+=6){
        if(n%i==0||n%(i+2)==0)return false;
    }
    return true;
}
void slove(){
    ll n; cin>>n;
    if(n==2)cout<<1<<endl;
    else if(n%2==0)cout<<2<<endl;
    else if(isPrime(n))cout<<1<<endl;
    else if(isPrime(n-2))cout<<2<<endl;
    else cout<<3<<endl;
 
}
int main()
{
    fast;
//  int t; cin>>t;
// while(t--) 
slove();
    return 0;
}