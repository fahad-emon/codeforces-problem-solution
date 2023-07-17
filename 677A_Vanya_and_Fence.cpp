#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y,a;cin>>x>>y;
    vector<int>v;
    for (int i = 0; i < x; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    int ans=0;
    for (int i = 0; i < x; i++)
    {
        if(v[i]%y==0){
            ans+= v[i]/y;
        }else{
            ans+= v[i]/y+1;
        }
    }
    cout<<ans<<endl;

   return 0;
}