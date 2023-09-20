#include<bits/stdc++.h>
using namespace std;

void solve(){

    int a,b;    cin>>a>>b;
    int mx = max(a,b);
    int mn = min(a,b);
    int ans = max(mn*2,mx);
    cout<<ans*ans<<endl;
    
}
int main(){

    int t;  cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}