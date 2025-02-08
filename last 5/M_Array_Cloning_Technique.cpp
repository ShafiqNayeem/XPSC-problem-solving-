#include <bits/stdc++.h>
#define in(v) for(int i = 0; i < v.size(); i++) cin >> v[i];
#define out(v) for(int i = 0; i < v.size(); i++) cout << v[i] << " ";
#define vi vector<int>
#define cyes cout << "yes" << endl;
#define cno cout << "no" << endl;
#define ll long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

int main() {
    fast;
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vi a(n);
        in(a);

        map<int, int> freq;
        int mx_freq = 0;

        for (int i = 0; i < n; i++) {
            freq[a[i]]++;
            mx_freq = max(mx_freq, freq[a[i]]);
        }

        int ans = 0;
        while (mx_freq < n) {
            int rem = n - mx_freq;
            int can_add = mx_freq;
            ans++; 
            int added = min(can_add, rem);
            ans += added;
            mx_freq += added;
        }

        cout << ans << endl;
    }

    return 0;
}
