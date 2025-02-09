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
    string str; cin>>str;
    int n=str.size();
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='7') ans+=pow(2,n-i-1);
        else ans+=0;
    }
    ll sum=0;
    for (int i = 0; i < n; i++) sum+=pow(2,i);
    // cout<<ans<<endl;
    cout<<sum+ans<<endl;

    


    return 0;
}