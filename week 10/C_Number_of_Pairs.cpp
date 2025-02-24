#include<bits/stdc++.h>
#define ll long long int
#define fl(i,start,end) for(int i=start;i<end;i++)
#define flr(i,start,end) for(int i=start;i>end;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define in(v) for(int i=0;i<v.size();i++) cin>>v[i];
#define out(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
#define vi vector<int>
#define vll vector<ll>
#define br endl
#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;
void slove(){
    ll n, i, j = 0, l, r;
    cin >> n >> l >> r;
    ll a[n], sum = 0;
    fl(i, 0, n)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    ll ans = 0;
    fl(i, 0, n)
    {
        ll up = upper_bound(a, a + n, r - a[i]) - a;
        ll down = lower_bound(a, a + n, l - a[i]) - a;
        if (i < up && i >= down)
            down++;
        if (up > down)
        {
            ans = ans + up - down;
        }
    }
    cout << ans / 2 << br;
}
int main()
{
    fast;
 int t; cin>>t;
while(t--) slove();
    return 0;
}