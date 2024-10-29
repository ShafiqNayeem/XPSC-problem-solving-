#include <bits/stdc++.h>
using namespace std;
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while (t--) {
      int n;
      cin >> n;
      string s;
      cin >> s;
      int pos1 = -1, pos2 = -1;
      pos1 = s.find('B');
      pos2 = s.rfind('B');
      int ans = pos2 - pos1 + 1;
      cout << ans << endl;
   }
   return 0;
}