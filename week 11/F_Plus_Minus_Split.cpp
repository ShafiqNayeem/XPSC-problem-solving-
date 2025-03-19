#include<bits/stdc++.h>
#define ll long long int
#define fl(i,start,end) for(int i=start;i<end;i++)
#define vc(type) vector<type>
#define cyes cout<<"yes"<<endl;
#define cno cout<<"no"<<endl;
#define br <<endl
#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;
int solve(){
 int n; cin>>n;
 string s; cin>>s;
 int plus=0;
 int result=0;
 fl(i,0,n){ if(s[i]=='+')plus++;else plus--;}
return abs(plus);
}
int main()
{
    fast;
 int t; cin>>t;
while(t--) cout<<solve() br;
    return 0;
}