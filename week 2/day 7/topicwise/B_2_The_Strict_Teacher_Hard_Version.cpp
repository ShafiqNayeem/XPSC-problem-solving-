#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll int n,m,q;
        cin>>n>>m>>q;
        vector<ll int>teacher(m);
        for (int i = 0; i < m; i++) cin>>teacher[i];
        sort(teacher.begin(),teacher.end());
        while (q--)
        {
            int david; cin>>david;
            if (david<teacher[0])
            {
                cout<<teacher[0]-1<<endl;
                continue;
            }
            if (david>teacher[m-1])
            {
                cout<<n-teacher[m-1]<<endl;
                continue;
            }
           auto it=lower_bound(teacher.begin(),teacher.end(),david);
           auto jt=it; jt--;
          ll int left=*it, right=*jt;
           ll int mid=(left+right)/2;
           cout<<min(abs(mid-left),abs(right-mid))<<endl;
            
            
        }
        
        
        

    }
    return 0;
}