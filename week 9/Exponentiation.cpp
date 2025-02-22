#include<bits/stdc++.h>
#define ll long long int

#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;
const ll MOD = 1e9 + 7;

ll mod_expo(ll a, ll b, ll mod) {
    ll result = 1;
    while (b > 0) {
        if (b % 2 == 1) 
            result = (result * a) % mod;
        a = (a * a) % mod; 
        b /= 2; 
    }
    return result;
}
void slove(){
    int n;
    cin >> n;
    
    while (n--) {
        ll a, b;
        cin >> a >> b;
        cout << mod_expo(a, b, MOD) << "\n";
    }
}
int main()
{
    fast;
//  int t; cin>>t;
// while(t--)
 slove();
    return 0;
}