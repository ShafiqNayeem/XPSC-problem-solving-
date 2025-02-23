#include<bits/stdc++.h>
#define ll long long int
#define fl(i,n) for(int i=0;i<n;i++) 
#define all(v) v.begin(),v.end()
#define in(v) for(int i=0;i<v.size();i++) cin>>v[i];
#define out(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
#define vi vector<int>
#define vll vector<ll>
#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;
void slove(){
    int x, n;
    cin >> x >> n;
    
    vi pos(n);
    in(pos);

    set<int> trafiic = {0, x}; 
    multiset<int> sig = {x}; 
    for (int p : pos) {
        // Find neighbors
        auto upper = trafiic.upper_bound(p); 
        auto lower = prev(upper); 

        sig.erase(sig.find(*upper - *lower));

        sig.insert(*upper - p);
        sig.insert(p - *lower);

        trafiic.insert(p);

        cout << *sig.rbegin() << " ";
    }

    cout << endl;
}
int main()
{
    fast;
//  int t; cin>>t;
// while(t--)
 slove();
    return 0;
}