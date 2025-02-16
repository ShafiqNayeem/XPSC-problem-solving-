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
    int t; cin>>t;
    while(t--)
    {
        int n,q; cin>>n>>q;
        vi a(n); in(a);
        int query;
        vi b;
        for(int i=0;i<q;i++){
            cin>>query;
            if(b.empty()|| b.back()>query)
            b.push_back(query);
        }
        for(int i=0;i<n;i++){
            for( auto it:b){
                if(a[i]%(1<<it)==0){
                    it=it-1;
                    a[i]+=(1<<it);
                }
            }
        }
        for(auto it:a) cout<<it<<" ";
        cout<<endl;
    }
    
 



    return 0;
}