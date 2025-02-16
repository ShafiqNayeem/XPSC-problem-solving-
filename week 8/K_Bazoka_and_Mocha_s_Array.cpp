#include<bits/stdc++.h>
#define in(v) for(int i=0;i<v.size();i++) cin>>v[i];
#define out(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
#define vi vector<int>
#define cyes cout<<"Yes"<<endl;
#define cno cout<<"No"<<endl;
#define ll long long int
#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;
bool prob(vi& a){   
    vi sorted_a=a;
    sort(sorted_a.begin(),sorted_a.end());

    int n=a.size();
    for(int i=0;i<n;++i){
        bool match=true;
        for(int j=0;j<n;++j){
            if(a[(i+j)%n]!=sorted_a[j]){
                match=false;
                break;
            }
            
        }
        if(match) return true;
    }
    return false;

}
int main()
{
    fast;
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vi a(n);
        in(a);
        if(prob(a)){
            cyes;
        }
        else{
            cno;
        }
    }
 

    return 0;
}