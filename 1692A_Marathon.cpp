#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
    int c,x;
    int ans=0;
    cin>>c;
    for (int  i = 0; i < 3; i++)
    {
       cin>>x;
        if(x>c){
            ans++;
        }
    }
    cout<<ans<<endl;
    }

    return 0;
}