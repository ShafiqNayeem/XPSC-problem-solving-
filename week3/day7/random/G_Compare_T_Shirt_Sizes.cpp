#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    ll t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        if(a[a.size()-1]=='M' || b[b.size()-1]=='M'){
            if(a[a.size()-1]=='L'){
                cout<<">"<<endl;
            }
            else if(b[b.size()-1]=='L'){
                cout<<"<"<<endl;
            }
            else if(a[a.size()-1]=='S'){
                cout<<"<"<<endl;
            }
            else if(b[b.size()-1]=='S'){
                cout<<">"<<endl;
            }
            else{
                cout<<"="<<endl;
            }
        }
        else{
            if(a[a.size()-1]=='S'){
                if(b[b.size()-1]=='S'){
                    if(a.size()==b.size()){
                        cout<<"="<<endl;
                    }
                    else if(a.size()>b.size()){
                        cout<<"<"<<endl;
                    }
                    else{
                        cout<<">"<<endl;
                    }
                }
                else{
                    cout<<"<"<<endl;
                }
            }
            else{
                if(b[b.size()-1]=='S'){
                    cout<<">"<<endl;
                }
                else{
                    if(a.size()==b.size()){
                        cout<<"="<<endl;
                    }
                    else if(a.size()>b.size()){
                        cout<<">"<<endl;
                    }
                    else{
                        cout<<"<"<<endl;
                    }
                }
            }
        }
    }
    return 0;
}
