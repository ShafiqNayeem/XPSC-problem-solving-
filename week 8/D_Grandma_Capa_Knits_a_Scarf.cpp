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
    ll t, n, i, j, ans, c, m, l, h, f;
    string a, b, d;
    
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        
        cin>>a;
        
            ans=100000000;
            for(i=0; i<26; i++)
            {
                c=0;
                f=0;
                for(l=0, h=n-1; l<h;)
                {
                    if(a[l]!=a[h]){
                        if(a[l]==char(i+97)){
                            l++;
                            c++;
                        }else if(a[h]==char(i+97)){
                            h--;
                            c++;
                        }else{
                            f++;
                            break;
                        }
                    }else{
                        l++;
                        h--;
                    }
                }
                if(f==0)
                {
                    ans=min(ans, c);
                }
            }
            if(ans==100000000)
            ans=-1;
            
            cout<<ans<<"\n";
    }
}