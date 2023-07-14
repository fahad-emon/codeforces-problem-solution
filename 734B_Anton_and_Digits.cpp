#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int ans=0;
    int x = min(a,min(d,c));
    a = a-x;
    while (x--)
    {
        ans+=256;
    }
    int y = min(a,b);
    while (y--)
    {
        ans+=32;
    }
    cout<<ans<<endl;
    
     


    return 0;
}