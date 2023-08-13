#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while (t--)
    {
        long long int a,b,c,n;cin>>a>>b>>c>>n;
        long long int mx = max(a,max(b,c));
        long long int d = abs(mx-a)+abs(mx-b)+abs(mx-c);
        if ( d>n ){
            cout<<"NO"<<endl;
        }else if ((n-d)%3 != 0  ){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
        
    }
    return 0;
}


