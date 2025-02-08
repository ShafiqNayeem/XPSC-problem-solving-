#include<bits/stdc++.h>
#define in(v) for(int i=0;i<v.size();i++) cin>>v[i];
#define out(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
#define vi vector<int>
#define cyes cout<<"YES"<<endl;
#define cno cout<<"NO"<<endl;
#define ll long long int
#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;
int main()
{
    fast;
    
 int t; cin>>t;
 string s;
 while(cin>>s){
    if(s=="()"){
        cno;
        continue;
    }
    cyes;
    string d(s.length(),'(');
    d+=string(s.length(),')');
    string b="";
    for(int i=0;i<s.length();i++) b+="()";
    if(d.find(s)!=string::npos) cout<<b<<endl;
    else cout<<d<<endl;
   }
            
    




    return 0;
}