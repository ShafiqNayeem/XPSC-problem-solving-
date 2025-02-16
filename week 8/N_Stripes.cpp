#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t, i, j, r, b;
    string a[8], ans;
    cin>>t;
    
    while(t--)
    {
        for(i=0; i<8; i++)  cin>>a[i];
        
           
        
        ans="-1";
        for(i=0; i<8; i++)
        {
            r=b=0;
            
            for(j=0; j<8; j++)
            {
                if(a[i][j]=='R')
                r++;
                
            }
            
            if(r==8)
            {
                ans="R";
                break;
            }
        }
        
        if(ans=="R")
        {
            cout<<ans<<endl;
        }else{
            cout<<"B"<<endl;
        }
    }
}