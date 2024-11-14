#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >> t;
   while (t--) {
      int n;
      cin >> n;
      vector<ll> a(n+4);
      for (int i = 0;i < n;i++) {
         cin >> a[i];
      }
      priority_queue<ll> q;
      ll ans = 0;
      for (int i = 0;i < n;i++) {
         if (a[i] > 0) q.push(a[i]);
         else {if(!q.empty()) {
            ll x=q.top(); 
         ans +=x;
          q.pop();
          }
      }
      }
      cout << ans << '\n';
   }
      return 0;
}