#include<bits/stdc++.h>
#define ll long long int
#define fl(i,n) for(int i=0;i<n;i++) 
#define all(v) v.begin(),v.end()
#define in(v) for(int i=0;i<v.size();i++) cin>>v[i];
#define out(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
#define vi vector<int>
#define vll vector<ll>
#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;
void slove(){
    int n;    cin >> n;
    vi p(n); in(p); 
    
    
    if(n==1 || n==2){
            cout<<-1<<endl;
            return; 
    }
    int one;
    int three;
    fl(i,n){
            if(p[i]==1){
                one=i;    
            }
            if(p[i]==3){
                   three=i;
            }
    }

    swap(p[one],p[three]);
     for(int i=0;i<n;i++){
            cout<<p[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    fast;
 int t; cin>>t;
while(t--) slove();
    return 0;
}