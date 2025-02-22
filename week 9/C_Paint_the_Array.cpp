#include<bits/stdc++.h>
#define ll long long int
#define in(v) for(int i=0;i<v.size();i++) cin>>v[i];
#define out(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
#define vi vector<int>
#define vll vector<ll>

#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;


ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

void solve() {
    int n;
    cin >> n;
    vll a(n);

   
    in(a);

    ll GCD_even = 0, GCD_odd = 0;

    
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) GCD_even = gcd(GCD_even, a[i]);
        else GCD_odd = gcd(GCD_odd, a[i]);
    }
    
    bool valid_even = true, valid_odd = true;
    for (int i = 1; i < n; i += 2) if (a[i] % GCD_even == 0) valid_even = false;
    for (int i = 0; i < n; i += 2) if (a[i] % GCD_odd == 0) valid_odd = false;

    if (valid_even) cout << GCD_even << endl;
    else if (valid_odd) cout << GCD_odd << endl;
    else cout << 0 << endl;
}

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 



    return 0;
}