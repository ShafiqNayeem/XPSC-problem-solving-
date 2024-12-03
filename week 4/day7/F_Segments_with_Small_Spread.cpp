#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n;
   ll k;
   cin >> n >> k;
   vector<ll> a(n);
   for (int i = 0;i < n;i++) {
      cin >> a[i];
   }

   int l = 0, r = 0;
   ll ans = 0;
   multiset<ll> ml;
   while (r < n) {
      ml.insert(a[r]);
      long long mn = *ml.begin(), mx = *ml.rbegin();
      if (mx - mn <= k) {
         ans += (r - l + 1);
      }
      else {
         while (l <= r) {
            mn = *ml.begin(), mx = *ml.rbegin();
            if (mx - mn <= k) {
               break;
            }
            ml.erase(ml.find(a[l]));
            l++;
         }
         mn = *ml.begin(), mx = *ml.rbegin();
         if (mx - mn <= k) {
            ans += (r - l + 1);
         }
      }
      r++;
   }

   cout << ans << endl;

   return 0;
}