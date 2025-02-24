#include<bits/stdc++.h>
#define ll long long int
#define fl(i,n) for(int i=1;i<n;i++) 
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define in(v) for(int i=0;i<v.size();i++) cin>>v[i];
#define out(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
#define vi vector<int>
#define vll vector<ll>
#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;
void slove(){
    int n, q;
    cin >> n >> q;

    vi candies(n); in(candies);
sort(rall(candies));

    vll prefix(n);
    prefix[0] = candies[0];
    fl(i,n)
        prefix[i] = prefix[i - 1] + candies[i];

    while (q--) {
        ll x;
        cin >> x;

        auto it = lower_bound(all(prefix), x);

        if (it == prefix.end())
            cout << "-1"<<endl;
        else
            cout << (it - prefix.begin() + 1) <<endl; 
    }
}
int main()
{
    fast;
 int t; cin>>t;
while(t--) slove();
    return 0;
}