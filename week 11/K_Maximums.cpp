#include<bits/stdc++.h>
#define ll long long int
#define fl(i,start,end) for(int i=start;i<end;i++)
#define vc(type) vector<type>
#define br <<endl
#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;
void solve(){
 int n; cin>>n;
//  cin >> n;
 vc(ll) b(n), a(n);
 
 for (int i = 0; i < n; i++) {
     cin >> b[i];
 }
 
 ll max_x = 0; 
 
 for (int i = 0; i < n; i++) {
     a[i] = b[i] + max_x;
     max_x = max(max_x, a[i]); 
 }
 
 for (int i = 0; i < n; i++) {
     cout << a[i] << " ";
 }
 cout br;
 }

int main()
{
    fast;
solve();
    return 0;
}