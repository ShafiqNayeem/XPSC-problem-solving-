#include<bits/stdc++.h>
#define ll long long int

#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;
void slove(){
    ll n;
    cin >> n;

    string s;
    cin >> s;

    ll c[4] = {0};  
    ll r = 0;

    
    for(auto i : s) {
        if(i != '?') {
            c[i - 'A']++;
        }
    }

    ll ans = 0;

    for(ll i = 0; i < 4; i++) {
        ans += min(c[i], n);  
    }

    cout << ans << endl;
}

int main()
{
    fast;
 int t; cin>>t;
while(t--) slove();
    return 0;
}