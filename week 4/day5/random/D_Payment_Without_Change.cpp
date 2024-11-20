#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

    int t;
    cin>>t;

    while(t--){

      ll a,b,n,s;
      cin>>a>>b>>n>>s;
      ll change=s%n;      
      if(change<=b and a*n+b>=s)
        cout<<"YES"<<endl;
      else 
        cout<<"NO"<<endl;
    }
}