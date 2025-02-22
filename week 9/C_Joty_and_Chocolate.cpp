#include<bits/stdc++.h>
#define ll long long int


#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;


ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}

void solve() {
    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    
    ll count_a = n / a;
    ll count_b = n / b;
    ll count_both = n / lcm(a, b);
    
    ll chocolates = (count_a - count_both) * p + (count_b - count_both) * q + count_both * max(p, q);
    
    cout << chocolates << endl;
}



int main()
{
    fast;
    solve();
   
 
    
    return 0;
}