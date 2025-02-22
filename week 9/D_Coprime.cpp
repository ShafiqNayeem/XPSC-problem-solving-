#include<bits/stdc++.h>
#define ll long long int
#define fl(i,n) for(int i=0;i<n;i++) 
#define all(v) v.begin(),v.end()
#define in(v) for(int i=0;i<v.size();i++) cin>>v[i];
#define out(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
#define vi vector<int>
#define vll vector<ll>
#define cyes cout<<"yes"<<endl;
#define cno cout<<"no"<<endl;
//tips for lamda function
//auto add = [](int a, int b) { return a + b; }; // cout << add(2, 3);  // Outputs 5
#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;

int main()
{
    fast;

    vector<int> cop[1111];
 
    for(int i=1;i<=1000;i++){
        for(int j=1;j<=1000;j++){
            if(__gcd(i,j)==1){
                cop[i].push_back(j);
            }
        }
    }
 
    int t;                  cin>>t;
    while(t--){
        int n;              cin>>n;
        vector<int> a(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
 
        vector<int> mxIndx(1111,-1);
 
        for(int i=1;i<=n;i++){
            mxIndx[a[i]]=i;
        }
 
        int ans=0;
 
        for(int i=1;i<=1000;i++){
            if(mxIndx[i]==-1)continue;
 
            if(i==1){
                ans=max(ans,2*mxIndx[i]);
                continue;
            }
            for(auto p:cop[i]){
                if(mxIndx[p]!=-1){
                    ans=max(ans,mxIndx[i]+mxIndx[p]);
                }
            }
        }
        if(ans==0)ans=-1;
        cout<<ans<<endl;
    }
    return 0;
}
