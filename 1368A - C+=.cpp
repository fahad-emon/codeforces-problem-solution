#include<bits/stdc++.h>
using namespace std;
void solve(){

    int a,b,n;  cin>>a>>b>>n;
    int c = 0 ;
    int i = 1;
    int mx = max(a,b);
    int mn = min(a,b);
    while (true)
    {
        if(mx>n || mn>n){
            break;
        }
        if(i%2 != 0 ){
            mn+=mx; c++;
        }else{
            mx+=mn; c++;
        }
        i++;
    }
    cout<<c<<endl;
      
}
int main(){

    int t;  cin>>t;
    while (t--)
    {
        solve();
    }
    

    return 0;
}