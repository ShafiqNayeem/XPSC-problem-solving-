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
    
    int t;                  cin>>t;
    while(t--){
        int n;              cin>>n;
        vi a(n);            in(a);
        int ans=0;
        // in_range_back(i,0,n-2){
        for(int i=n-2;i>=0;i--){
            while(a[i]!=0 and a[i]>=a[i+1]){
                a[i]/=2;
                ans++;
            }
            if(a[i]>=a[i+1] or a[i]==0 and i>0){
                ans=-1;
                break;
            }
        }
        cout<<ans<<endl;
    }



    return 0;
}