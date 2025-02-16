#include<bits/stdc++.h>

#define ll long long int
#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;
int main()
{
    fast;
    ll t, n, i, j, c1, c2, ans;
    ll po[61];
    po[0]=1;
    
    for(i=1; i<=60; i++)
    {
        po[i]=(po[i-1]*2);
    }
    
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        
        c1=c2=0;
        
        while(n--)
        {
            cin>>i;
            
            if(i==1)
            c1++;
            else if(i==0)
            c2++;
        }
        
        ans=po[c2];
        ans=ans*c1;
        
        cout<<ans<<endl;
        
    }
    
 



    return 0;
}
