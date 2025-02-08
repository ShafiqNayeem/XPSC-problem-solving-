#include<bits/stdc++.h>
#define in(v) for(int i=0;i<v.size();i++) cin>>v[i];
#define out(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
#define vi vector<int>
#define cyes cout<<"Yes"<<endl;
#define cno cout<<"No"<<endl;
#define ll long long int
#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;
int main()
{
    fast;
    
    int t; cin>>t;
    while(t--)
    {

        int n,k;            cin>>n>>k;
        vector<ll> s(n+1,0);
        for(int i=n-k+1;i<=n;i++){
            cin>>s[i];
        }
        vector<ll> a(n+1);
 
        if(n==1 or k==1){
            // cout<<"Yes"<<endl;
            cyes;
            continue;
        }
 
        for(int i=n;i>=n-k+2;i--){
            a[i]=(s[i]-s[i-1]);
        }
 
        bool possible=true;
 
        for(int i=n-k+2;i<=n;i++){
            if(i+1<=n and a[i+1]<a[i]){
                possible=false;
                break;
            }
        }
 
        if(!possible){
            // cout<<"No"<<endl;
            cno;
            continue;
        }
 
        for(int i=n-k+1;i>1;i--){
            a[i]=a[i+1];
            s[i-1]=s[i]-a[i];
        }
        a[1]=s[1];
 
        for(int i=1;i<=n;i++){
            if(i+1<=n and a[i+1]<a[i]){
                possible=false;
                break;
            }
        }
 
        if(possible){
            // cout<<"Yes"<<endl;
            cyes;
        }
        else{
            // cout<<"No"<<endl;
            cno;
        }
 
 
    }


    return 0;
}