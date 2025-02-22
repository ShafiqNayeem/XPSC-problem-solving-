#include<bits/stdc++.h>
#define ll long long int

#define vi vector<int>
#define vll vector<ll>
#define cyes cout<<"yes"<<endl;
#define cno cout<<"no"<<endl;
//tips for lamda function
//auto add = [](int a, int b) { return a + b; }; // cout << add(2, 3);  // Outputs 5
#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;
void slove(){
    ll n;
    cin >> n;

    string s;
    cin >> s;

    vll a(n, -1);
    ll cur = 0;
    for (ll i = 0; i < n; i++) {
        if (s[i] != 'p' && i + 1 < n) {
            continue;
        }
        ll j = i;
        while (j >= 0 && a[j] == -1) {
            a[j] = cur;
            cur++;
            j--;
        }
    }

    bool fl = true;
    ll sum = 0;
    for (ll i = n - 1; i >= 0; i--) {
        sum += a[i];
        if (s[i] != 's') {
            continue;
        }
        const ll l = n - i;
        if (l * (l - 1) / 2 != sum) {
            fl = false;
        }
    }

    cout << (fl ? "YES" : "NO") << endl;
}
int main()
{
    fast;
 int t; cin>>t;
while(t--) slove();
    return 0;
}