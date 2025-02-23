#include<bits/stdc++.h>
#define ll long long int
#define fl(i,n) for(int i=0;i<n;i++) 
#define all(v) v.begin(),v.end()
#define in(v) for(int i=0;i<v.size();i++) cin>>v[i];
#define out(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
#define vi vector<int>
#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;
void slove(){
    int n;
    cin >> n;
    
    vi pos(n + 1); 

    fl(i, n) {
        int x;
        cin >> x;
        pos[x] = i;  
    }

    int rounds = 1;
    for (int i = 2; i <= n; i++) {
        if (pos[i] < pos[i - 1]) {
            rounds++; 
        }
    }

    cout << rounds << endl;
}
int main()
{
    fast;
//  int t; cin>>t;
// while(t--)
 slove();
    return 0;
}