#include<bits/stdc++.h>

#define ll long long int
#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;
int main()
{
    fast;
    ll n;
    int k;
    cin >> n >> k;
    
    vector<ll> div;
    
    
    for (ll i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            div.push_back(i);
            if (i != n / i) { 
                div.push_back(n / i);
            }
        }
    }
    
    
    sort(div.begin(), div.end());
    
    
    if (k > div.size()) {
        cout << -1 << endl;
    } else {
        cout << div[k - 1] << endl;
    }
    
    return 0;
}
