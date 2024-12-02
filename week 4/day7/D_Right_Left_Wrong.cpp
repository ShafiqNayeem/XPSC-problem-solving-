#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    { 
    int n; cin >> n;
    vector<ll> arr(n);
    vector<ll> pref(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    string s; cin >> s;
    pref[0] = arr[0];
    for(int i = 1; i < n; i++) pref[i] = pref[i - 1] + arr[i];
    ll count = n - 1;
    ll ans = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == 'L') {
            while(count > i and s[count] != 'R') count--;
            if(count > i) {
                ans += pref[count] - (i > 0 ? pref[i - 1] : 0);
                count--;
            }
        }
    }
    cout << ans << endl;
}
}
