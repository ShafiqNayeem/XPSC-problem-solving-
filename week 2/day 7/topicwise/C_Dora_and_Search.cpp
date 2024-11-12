#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;cin>>t;
 while ( t--)
 {
    int n; cin>>n;
   vector<int>v(n);
   for ( int i = 0; i <  n; i++)
   {
     cin>>v[i];
   }
int chek=0;
int lo=0;int hi=n-1;
int mx=n;int mn=1;
while ( hi>=lo)
{
     if((v[hi]==mx && v[lo]==mn)||(v[hi]==mn && v[lo]==mx))
        hi--,lo++,mn++,mx--;
     
     else if(v[hi]==mx)
        hi--,mx--;
     
     else if(v[hi]==mn)
        hi--,mn++;
     
     else if(v[lo]==mx)
        lo++,mx--;
     
     else if(v[lo]==mn)
        lo++,mn++;
     
     else
     {
         cout<<lo+1<<" "<<hi+1<<endl;
         chek=1;
         break;
     }    
}
   if(chek==0)
    cout<<-1<<endl;
 }
}