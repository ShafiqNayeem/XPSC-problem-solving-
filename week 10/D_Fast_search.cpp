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
 int n; cin>>n;
 vi arr(n); in(arr);
 sort(all(arr));
 int k; cin>>k;
 while (k--) {
    int l, r;
    cin >> l >> r;

    int left = lower_bound(all(arr), l) - arr.begin();
    int right = upper_bound(all(arr), r) - arr.begin();

    cout << (right - left) << " ";
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