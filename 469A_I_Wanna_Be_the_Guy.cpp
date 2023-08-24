#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){

    set<int>p;
    int n,t,a;      cin>>n;

    cin>>t;
    for (int i=0; i<t; i++){
        cin>>a;
        p.insert(a); 
    }

    cin>>t;
    for (int i=0; i<t; i++){
        cin>>a;
        p.insert(a); 
    }
    
    if(p.size() == n)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;
    return 0;
}