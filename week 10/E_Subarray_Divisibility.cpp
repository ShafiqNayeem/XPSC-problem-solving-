#include<bits/stdc++.h>
#define ll long long int
#define fl(i,n) for(int i=0;i<n;i++) 
#define all(v) v.begin(),v.end()
#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;
void slove(){
    int n;
    cin >> n;
    
    ll count = 0, preSum = 0;
    map<int, int> remCnt;
    remCnt[0] = 1;  
    
    fl(i, n) {
        ll num;
        cin >> num;
        preSum += num;
        
        int rem = ((preSum % n) + n) % n;
        
        
        if (remCnt.count(rem)) {
            count += remCnt[rem];
        }
        
        remCnt[rem]++;
    }
    
    cout << count << "\n";
}
int main()
{
    fast;
//  int t; cin>>t;
// while(t--) 
slove();
    return 0;
}