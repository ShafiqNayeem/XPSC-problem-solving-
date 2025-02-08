#include<bits/stdc++.h>
#define in(v) for(int i=0;i<v.size();i++) cin>>v[i];
#define out(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
#define vi vector<int>
#define cyes cout<<"yes"<<endl;
#define cno cout<<"no"<<endl;
#define ll long long int
#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;
int main()
{
    fast;
    ll t;
    cin >> t;
    while (t--) {
        ll n, secLast, sum = 0, last;
        cin >> n;
        vector < ll > v(n);
        for (ll i = 0 ; i < n - 2; i++) {
            cin >> v[i];
            sum += v[i];
        }
        cin >> secLast;
        secLast -= sum;
        cin >> last;
        last -= secLast;
        cout << last << endl;
    }


    return 0;
}