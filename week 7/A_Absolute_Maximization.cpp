#include<bits/stdc++.h>
#define in(v) for(int i=0;i<v.size();i++) cin>>v[i];
#define out(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
#define vi vector<int>

#define ll long long int
#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;
int main()
{
    fast;
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vi a(n);
        in(a);
        ll s1,s2;
         s1=s2=a[0];
         for(int i=1;i<n;i++){
            s1=s1|a[i];
            s2=s2&a[i];
         }
         cout<<s1-s2<<endl;
    }

    return 0;
}