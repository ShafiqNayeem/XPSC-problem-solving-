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
 while (t--)
 {
    int n,k;
    cin>>n>>k;
    vi v(n);
    map<int,int> m2;
 
    for(auto &x:v){
        cin>>x;
    }
    vi temp=v;
    sort(temp.begin(),temp.end());
 
    map<int,set<int>> m;
    for(int i=0;i<n;i++){
        m[i%k].insert(v[i]);
    }
 
    for(int i=0;i<n;i++){
        auto check=m[i%k];
        if(check.find(temp[i])==check.end()){
            m2[i%k]++;
        }
    }
    if(m2.size()==0){
        cout<<"0"<<endl;
        // break;
        continue;
    }
 
    int count=0;
    for(auto x:m2){
        if(x.second==1){
            count++;
        }
        else{
            count+=100;
        }
    }
    if(count==2){
        cout<<"1"<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
   
 }
 



    return 0;
}