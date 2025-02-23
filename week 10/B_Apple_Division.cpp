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
    int n;
    cin >> n;
    vi apples(n);
    
    ll weight = 0;
    fl(i, n) {
        cin >> apples[i];
        weight += apples[i];
    }

    ll diff = LLONG_MAX;

    
    int subsets = 1 << n; 
    
    fl(mask, subsets) {
        ll grp1 = 0;

        fl(i, n) {
            if (mask & (1 << i)) { 
                grp1 += apples[i];
            }
        }

        ll grp2 = weight - grp1;
        diff = min(diff, abs(grp1 - grp2));
    }

    cout << diff << endl;
}
int main()
{
    fast;
//  int t; cin>>t;
// while(t--) 
slove();
    return 0;
}