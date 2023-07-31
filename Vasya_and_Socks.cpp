#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;cin>>n>>m;
    int ans = n+(n-1)/(m-1);
    cout<<ans<<endl;
    return 0;
}