#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;  cin>>n;
    vector<int>v(n);
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        mx = max(mx,v[i]);
    }
    int ans = 0; 
    for (int i = 0; i < n; i++)
    {
        ans+= mx - v[i];
    }
    cout<<ans<<endl;
    
    return 0;
}