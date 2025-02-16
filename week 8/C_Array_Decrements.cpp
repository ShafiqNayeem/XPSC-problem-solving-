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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vi ar(n),br(n);
        in(ar);
        in(br);
        int mx=0;
        map<int,int>mp;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(ar[i]<br[i])ans=1;
            else
            {
                if(br[i]==0)
                {
                    mx=max(mx,ar[i]);
                }
                else
                {
                    int dif=ar[i]-br[i];
                    mp[dif]++;
                }
            }
        }
        int x=-1;
        for(auto it:mp)
        {
            x = it.first;
        }
        if(mp.size()>1)ans=1;
        if(x!=-1 && mx>x)ans=1;
 
 
        if(ans==1){cno;}
        else cyes;
 
    }
    
 



    return 0;
}
