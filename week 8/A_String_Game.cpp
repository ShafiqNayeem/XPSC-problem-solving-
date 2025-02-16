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
    int t;
    cin>>t;
    while(t--){
        int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int sum1=0;
	    for (int i = 0; i < n; i++) {
	        if(s[i]=='1')
	        sum1++;
	    }
	    int j=min(sum1,n-sum1);
	    if(j%2!=0)
	    cout << "Zlatan" << std::endl;
	    else
	    cout << "Ramos" << std::endl;
	    
	}
    
    
 



    return 0;
}