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
    {long long x;
        cin>>x;
        
        long long e=x,count=0;
        while(e>1)
        {
            e=e/2;
            count++;
        }
        long long temp=pow(2,count);
        cout<<x-temp<<" "<<temp<<endl;
    }



    return 0;
}