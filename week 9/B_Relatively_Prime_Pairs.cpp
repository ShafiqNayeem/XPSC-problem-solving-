#include<bits/stdc++.h>
#define ll long long int

#define cyes cout<<"YES"<<endl;
#define cno cout<<"no"<<endl;
#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;
void slove(){
    ll l, r;
    cin >> l >> r;
    cyes
    for (ll i = l; i < r + 1; i += 2)
       cout << i << ' ' << i + 1 << endl;
}
int main()
{
    fast;
//  int t; cin>>t;
// while(t--) 
slove();
    return 0;
}