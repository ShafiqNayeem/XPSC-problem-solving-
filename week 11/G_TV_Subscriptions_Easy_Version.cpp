#include<bits/stdc++.h>
#define ll long long int
#define fl(i,start,end) for(int i=start;i<end;i++)
#define vc(type) vector<type>
#define cyes cout<<"yes"<<endl;
#define cno cout<<"no"<<endl;
#define br <<endl
#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;
void solve(){
    int n, k, d;
    cin >> n >> k >> d;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    map<int, int> freq;
    int uniqCnt = 0, minSub = INT_MAX;

    for (int i = 0; i < d; i++) {
        if (freq[a[i]] == 0) uniqCnt++;
        freq[a[i]]++;
    }
    minSub = uniqCnt;

    for (int i = d; i < n; i++) {
        if (--freq[a[i - d]] == 0) uniqCnt--;
        
        if (freq[a[i]]++ == 0) uniqCnt++;

        minSub = min(minSub, uniqCnt);
    }

    cout << minSub << endl;
}
int main()
{
    fast;
 int t; cin>>t;
while(t--) solve();
    return 0;
}