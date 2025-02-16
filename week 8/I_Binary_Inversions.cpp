#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t, n, i, j, ans, ch;
    
    cin>>t;
    
   while(t--)
    {
        cin>>n;
        
        ll a[n];
        ans=0;
        ll pre1[n], pre0[n];
        ch=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        
        if(a[0]==1){
            pre1[0]=1;
            pre0[0]=0;
        }else{
            pre0[0]=1;
            pre1[0]=0;
        }
        
        for(i=1; i<n; i++)
        {
            if(a[i]==1){
                pre1[i]=pre1[i-1]+1;
                pre0[i]=pre0[i-1];
            }else{
                pre1[i]=pre1[i-1];
                pre0[i]=pre0[i-1]+1;
            }
        }
        
        for(i=0; i<n; i++)
        {
            if(a[i]==0){
                ans=ans+pre1[i];
            }
        }
        
        for(i=0; i<n; i++)
        {
            if(a[i]==1){
                ch=max(ch, (pre1[i]-1)-(pre0[n-1]-pre0[i]));
            }else{
                ch=max(ch, (pre0[n-1]-pre0[i])-(pre1[i]));
            }
        }
        
        cout<<ans+ch<<endl;
    }
}

