#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;  cin>>n;
    int ans = 0 ; int x,y,ex = 0;
    while (n--)
    {
        cin>>x>>y;
        ex-=x;ex+=y;
        ans = max(ans,ex);
    }
    cout<<ans<<endl;

    return 0;
}