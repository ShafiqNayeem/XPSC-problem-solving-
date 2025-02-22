#include<bits/stdc++.h>
#define ll long long int

#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;
ll getPrime(ll n){
    while (n % 2 == 0)
    {
        return 2;
        n = n/2;
    }
    for (ll i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            return i;
            n = n/i;
        }
    }
    if (n > 2)
        return n;
}
void slove(){
 ll l,r; cin>>l>>r;
 if(r<=3) cout<<-1<<endl;
 else{
    if(l<r){
        if(r%2!=0)r--;
        cout<<2<<" "<<r-2<<endl;
    }
    else{
        ll prime=getPrime(l);
        if(prime==l)cout<<-1<<endl;
        else cout<<prime<<" "<<l-prime<<endl;
    }
 }
}
int main()
{
    fast;
 int t; cin>>t;
while(t--) slove();
    return 0;
}