#include<bits/stdc++.h>
using namespace std;

int main(){

    int x,y,z,sum;
    cin>>x>>y>>z;
    for (int i = 1; i <= z; i++)
    {
        sum+= (i*x);
    }
    if(sum>y){
        cout<<sum-y<<endl;
    }else{
        cout<<"0"<<endl;
    }
    
    
    return 0;
}