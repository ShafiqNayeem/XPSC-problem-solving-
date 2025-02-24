#include<bits/stdc++.h>
#define ll long long int
#define fl(i,start,end) for(int i=start;i<end;i++)
#define flr(i,start,end) for(int i=start;i>end;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define in(v) for(int i=0;i<v.size();i++) cin>>v[i];
#define out(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
#define br endl
#define vi vector<int>
#define vll vector<ll>
#define vc(type) vector<type>
#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;
void slove(){
    int n;
    cin >> n;
    
    vi prices(n);in(prices);

    sort(all(prices));

    int q;    cin >> q;

    while (q--) {
        int mi;        cin >> mi;

        int count = upper_bound(all(prices), mi) - prices.begin();
        cout << count <<br;
    }
}
int main()
{
    fast;
//  int t; cin>>t;
// while(t--) 
slove();
    return 0;
}