#include<bits/stdc++.h>
#define ll long long int
#define fl(i,start,end) for(int i=start;i<end;i++)
#define flr(i,start,end) for(int i=start;i>end;i--)
#define all(v) v.begin(),v.end()
#define vi vector<int>
#define vll vector<ll>
#define vc(type) vector<type>
#define br endl
#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;
void slove(){
    int n;
    cin >> n;
    
    vi prefix(n);
    int sum = 0;
    
    fl(i,0,n) {
        int worms;
        cin >> worms;
        sum += worms;
        prefix[i] = sum;
    }

    int m;
    cin >> m;

    while (m--) {
        int qi;
        cin >> qi;

        int pile = lower_bound(all(prefix), qi) - prefix.begin() + 1;
        cout << pile << br;
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