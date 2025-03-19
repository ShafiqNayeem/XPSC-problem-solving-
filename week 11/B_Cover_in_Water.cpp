#include<bits/stdc++.h>
#define ll long long int
#define fl(i,start,end) for(int i=start;i<end;i++)
#define vc(type) vector<type>
#define cyes cout<<"yes"<<endl;
#define cno cout<<"no"<<endl;
#define br <<endl
#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;

void solve(){
 int n; cin>>n;
 string s; cin>>s;
 int etyCell=0;
 int hatrick=0;
 fl(i,0,n){
    if(s[i]=='.') {
        etyCell++;
        hatrick++;
    }
    else hatrick=0;

    if(hatrick>=3) break;
}
if(hatrick>=3) cout<<2 br;
else cout<<etyCell br;
}
int main()
{
    fast;
 int t; cin>>t;
while(t--) solve();
    return 0;
}