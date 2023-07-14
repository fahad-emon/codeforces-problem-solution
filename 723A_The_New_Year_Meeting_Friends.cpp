#include<bits/stdc++.h>
using namespace std;

int main(){

    int x,y,z;
    cin>>x>>y>>z;
    int a = abs(x-y)+abs(x-z); 
    int b = abs(y-x)+abs(y-z);
    int c = abs(z-x)+abs(z-y);
    cout<<min(a,min(b,c))<<endl;
    
    return 0;
}