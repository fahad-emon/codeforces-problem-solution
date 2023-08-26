#include<bits/stdc++.h>
using namespace std;

int main(){

    int x,y,c=0;    cin>>x>>y;
    y = 240 - y;
    int i = 1;
    while (i*5 <= y && x--){
        y-= i*5; c++;i++;
    }
    cout<<c<<endl;
    
    return 0;
}