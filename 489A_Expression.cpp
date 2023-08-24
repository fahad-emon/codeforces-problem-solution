#include<bits/stdc++.h>
using namespace std;

int main(){

    int a,b,c;  cin>>a>>b>>c;
    int ans;
    ans = max(a+(b*c),max(b+(a*c),c+(a*b)));
    ans = max(ans,max(a*(b+c),c*(a+b)));
    ans = max(ans,max(a*b*c,a+b+c));
    
    cout<<ans<<endl;
    return 0;
}