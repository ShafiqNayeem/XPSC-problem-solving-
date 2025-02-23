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
    ll x;
    cin >> n >> x;
    
    ll count = 0, preSum = 0;
    unordered_map<ll, int> preCnt;
    preCnt[0] = 1; 
    
    fl(i, n) {
        ll num;
        cin >> num;
        preSum += num;
        
        if (preCnt.find(preSum - x) != preCnt.end()) {
            count += preCnt[preSum - x];
        }
        
        preCnt[preSum]++;
    }
    
    cout << count <<endl;
}
int main()
{
    fast;
slove();
    return 0;
}