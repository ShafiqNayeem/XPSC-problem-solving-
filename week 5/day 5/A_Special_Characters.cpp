#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >> t;
   while (t--) {
      int n;
      cin >> n;
    //   if (n <= 1) cout << "NO" << endl; //return 0;
    if(n%2!=0)
    {
        cout<<"NO"<<endl;
        // return;
        continue;
    }
      else {
        cout << "YES" << endl;
        int v=n/2;
        char ch = 'A';
        
        for (int i = 1; i <= v; i++) {
            // cout << ch ;
            if(i%2!=0) cout<<"AA";
            else cout<<"BB";

        }
        cout << endl;
      }
   }  
   return 0;
}