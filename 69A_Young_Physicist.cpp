#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int x,y,z,xx=0,yy=0,zz=0;
    for (int i = 0; i < n; i++)
    {
        cin>>x>>y>>z;
        xx+=x;yy+=y;zz+=z;
    }
    if(xx != 0 || yy != 0 || zz != 0){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
    
    
    return 0;
}
