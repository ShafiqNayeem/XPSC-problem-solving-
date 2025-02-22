#include<bits/stdc++.h>
#define ll long long int
using namespace std;

#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);

int main(){
    fast;
    int t; cin>>t;
    while(t--){
        int x,y,k; cin>>x>>y>>k;
        while (x>1)
        {
            int p=y-(x%y);
            if(p>=k){x+=k; k=0;}
            else {k-=p;x+=p;}
            while(x%y==0)x=x/y;
            if(k<=0)break;
        }
        if(k>0){
            k=k%(y-1);
            x+=k;
            while(x%y==0)x=x/y;

        }
        cout<<x<<endl;
    }
        
}